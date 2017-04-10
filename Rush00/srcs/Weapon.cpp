/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 15:40:29 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/09 15:40:33 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	this->lastShoot = std::clock();

}
Weapon::Weapon(float cd, std::string & rocket_sh, float pwS, bool is_player) : 
												cd(cd),
												pwS(pwS),
												rocket_sh(rocket_sh),
												is_player(is_player) {
	this->lastShoot = std::clock();
}
Weapon::~Weapon(){}
Weapon::Weapon(Weapon const & src){
	*this = src;
}
Weapon & Weapon::operator=(Weapon const & src){
//	this->dir = src.dir;
	this->cd = src.cd;
	return *this;
}


void Weapon::shoot(Vec2 & pos, Vec2 & speed, Scene * win){
	if ( ((this->lastShoot - std::clock()) / (double) CLOCKS_PER_SEC) < this->cd)
			return;

	Rocket * r = win->findDeadRocket();
	if (r == NULL)
		return;

	//r->dir = this->dir;
	r->is_alive = true;
	r->sh = this->rocket_sh;
	r->pos = pos;
	r->speed.x = 100 + this->pwS * speed.x;
	r->speed.y = this->pwS * speed.y;
	r->is_player = this->is_player;
	r->size = 1;

	this->lastShoot = std::clock();
}

