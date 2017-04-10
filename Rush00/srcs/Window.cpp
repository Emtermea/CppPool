/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 12:06:32 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 12:06:35 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

//________CONSTRUCT___________
Window::Window(){
	initscr();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	srand (time(NULL));

	this->_score = 0;
	this->_player = new Player(*(new Vec2((float)LINES /2, (float)COLS / 10)) );
	this->_enemies = new Enemies[100];
	this->_rockets = new Rocket[1000];
	this->_boss = new Enemies(*(new Vec2((float)LINES /2, (float)COLS / 10)) );
	this->_nb_enemies = 0;
}
Window::~Window(void){
	delete this->_player;
	delete [] this->_enemies;
	delete [] this->_rockets;
	delete this->_boss;
	clear();
	endwin();
}
Window::Window(Window const & src){
	*this = src;
}
Window & Window::operator=(Window const & src){
	this->_player = src.get_player();
	return *this;
}
//____________________________

//________GETER-SETTER________

	void Window::set_player(Player * value){
		this->_player = value;
	}
	Player * Window::get_player(void) const{
		return this->_player;
	}
//____________________________



void Window::ft_init_cadre() const{
	box(stdscr, ACS_VLINE, ACS_HLINE);
}

void Window::displayGO(){
	clear();
	this->_player->display();
	if (this->_boss->is_alive)
		this->_boss->display();
	for (int i = 0; i < 100; ++i)
	{
		if (this->_enemies[i].is_alive)
			this->_enemies[i].display();
	}
	for (int i = 0; i < 1000; ++i)
	{
		if (this->_rockets[i].is_alive)
			this->_rockets[i].display();
	}
	refresh();
}

int Window::check_key(int key) {
	if (key == KEY_UP) // move up //this->displayGO(); //clear
		if (this->_player->pos.y > 3)
			this->_player->pos.y -= 2 ;
	if (key == KEY_DOWN) // move down //this->displayGO(); //clear
		if (this->_player->pos.y < LINES - 3)
			this->_player->pos.y += 2 ;
	if (key == 32) //shoot
	{
		this->_player->wp->shoot(this->_player->pos, this->_player->speed, this);
	}
	if (key == 27) {
		std::cout << "ESC" << '\n';
		return -1;
	}
	return 0;
}

int Window::randPos(int min, int max) {
	int b = min + (rand() % (max-min));
	return b ;
}

void Window::enemySpawner(){
	if (this->_nb_enemies == 100)
	 	return;
	int i;
	for (i = 0; i < 100; ++i)
	{
		if (this->_enemies[i].is_alive == false)
			break;
	}
	if (this->randPos(1, 100) <= 2)
	{
		this->_enemies[i].spawn(
			*(new Vec2 ( (float)randPos(2, LINES - 2), (float)COLS - 10) ),
			*(new Vec2 ( 0 , -1 * (float)randPos(20, 50)  ) )
		);
		++(this->_nb_enemies);
	}
	if (this->_score == 20)
	{
		this->_boss->spawn(
			*(new Vec2 ( (float)(LINES /2), (float)COLS - 50) ),
			*(new Vec2 ( 0 , -1 * (float)randPos(20, 50)  ) )
		);
	}
}

void Window::updatePos(double dt)
{
	for (int i = 0; i < 100; ++i)
	{
		if (this->_enemies[i].is_alive)
			this->_enemies[i].updatePos(dt);
	}
	for (int i = 0; i < 1000; ++i)
	{
		if (this->_rockets[i].is_alive)
			this->_rockets[i].updatePos(dt);
	}
}

bool Window::checkCollisionRocket(AGameObjects ob)
{
	for (int i = 0; i < 1000; ++i)
	{
		if (this->_rockets[i].is_alive && this->_rockets[i].is_player)
		{
			if (this->_rockets[i].pos.x >= COLS - 2)
			{
				this->_rockets[i].is_alive = false;
			}
			if (ob.collideWith(this->_rockets[i]))
			{
				this->_rockets[i].is_alive = false;
				this->_score += 10;
				return true;
			}
		}
	}
	return false;
}

void Window::checkCollision(){
	for (int i = 0; i < 100; ++i)
	{
		if (this->_enemies[i].is_alive)
		{
			if ( this->_player->collideWith(this->_enemies[i]) )
				this->_player->is_alive = false;
			else if (this->_enemies[i].pos.x <= 2)
				this->_enemies[i].is_alive = false;
			else if (this->checkCollisionRocket(this->_enemies[i]))
				this->_enemies[i].is_alive = false;
			if (this->_enemies[i].is_alive == false)
				--(this->_nb_enemies);
		}

	}
}

Rocket *	Window::findDeadRocket(){
	for (int i = 0; i < 1000; ++i)
	{
		if (this->_rockets[i].is_alive == false)
			return ( &this->_rockets[i] );
	}
	return (NULL);
}


void Window::displayScore(){
	move(3,5);
	addstr("Score : ");
	std::stringstream tmp;
	tmp << this->_score;

	std::string str = tmp.str();

	addstr(str.c_str());
}

void Window::mainLoop(){

	std::clock_t start;
	double dt = 0;
	start = std::clock();

	int ch;
	nodelay(stdscr, TRUE); // pour que getch ne soit pas bloquant.
	while (42) {
		dt = (std::clock() - start) / (double) CLOCKS_PER_SEC;	// dt set at 60 fps
		if ( dt <= 0.017 )										//
			continue;											//
		start = std::clock();									//

		this->updatePos( dt );
		this->checkCollision();
		if (this->_player->is_alive == false)
			break;

		clear();


		this->enemySpawner();
		this->displayGO(); //pour le display player des le debut
	//	this->ft_init_cadre();
		this->displayScore();
		if ((ch = getch()) != ERR)
			if (this->check_key(ch) == -1)
				break ; // calcul new pos player

	}

	this->endGame();
}

void Window::endGame(){
	clear();
	move(LINES / 2, COLS / 2);
	addstr("You lose. Your score is : ");
	std::stringstream tmp;
	tmp << this->_score;
	std::string str = tmp.str();
	addstr(str.c_str());
	addstr("\n");
	move(LINES / 2 + 1, COLS / 2);
	addstr(" Press Any Key to Exit!");
	nodelay(stdscr, false);
	refresh();
	getch();
}
