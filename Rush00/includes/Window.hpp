/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:48:26 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 11:48:29 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP

# include "Player.hpp"
# include "Enemies.hpp"
# include "Scene.hpp"

# include <sstream>
# include <time.h>
# include <locale.h>
# include <ncurses.h>
# include <curses.h>
# include <cstdlib>

class Window : public Scene {
private:

	void ft_init_cadre(void) const;
	void displayGO();

	Player		*	_player;
	Enemies		*	_boss;
	Enemies		*	_enemies;
	Rocket		*	_rockets;
	int			_nb_enemies;
	int			_score;

public:

//________CONSTRUCT___________

	Window (void);
	virtual ~Window(void);
	Window (Window const &);
	Window & operator=(Window const &);

//____________________________
//________GETER-SETTER________

	void set_player(Player *);
	Player * get_player(void) const;

//____________________________

	void	mainLoop();
	void	endGame();

	int		check_key(int);
	void	updatePos(double);
	void	checkCollision();
	void	displayScore();

	void	enemySpawner();
	int		randPos(int min, int max);

	Rocket * findDeadRocket(void);
	bool checkCollisionRocket(AGameObjects ob);

};


#endif
