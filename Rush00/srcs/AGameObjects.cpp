/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameObjects.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 18:48:14 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/08 19:53:33 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AGameObjects.hpp"

//________CONSTRUCT___________


AGameObjects::AGameObjects(){
	this->is_alive = false;
}
AGameObjects::AGameObjects(Vec2 & pos, std::string & sh, float size, Vec2 & offSet, bool is_alive) : 
												pos(pos),
												sh(sh),
												size(size),
												offSet(offSet),
												is_alive(is_alive){
	this->speed.x = 0;
	this->speed.y = 0;
}
AGameObjects::~AGameObjects (){
};
AGameObjects::AGameObjects(AGameObjects const & src){
	*this = src;
}
AGameObjects & AGameObjects::operator=(AGameObjects const & src){
	this->pos = src.pos;
	this->sh = src.sh;
	return *this;
}



//____________________________

void AGameObjects::display(){
	std::istringstream sifs(this->sh);

	std::string tmp;
	int i = 0;

	int cur_x = (int)(this->pos.x + this->offSet.x);
	int cur_y = (int)(this->pos.y + this->offSet.y);


	while(std::getline(sifs, tmp))
	{
		move(cur_y + i, cur_x);
		addstr(tmp.c_str());
		++i;
	}
}

void AGameObjects::updatePos(double dt)
{
	this->pos.x += this->speed.x * dt;
	this->pos.y += this->speed.y * dt;  
}

bool AGameObjects::collideWith(AGameObjects & other){
	float dist2 = (this->pos.x - other.pos.x) * (this->pos.x - other.pos.x) + (this->pos.y - other.pos.y) * (this->pos.y - other.pos.y);
	if (dist2 <= this->size * this->size || dist2 <= other.size * other.size)
		return true;
	return false;
}
