/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 19:18:06 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/08 19:18:08 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

//________CONSTRUCT___________

Player::Player(Vec2 & pos) : AGameObjects(
									pos,
									Player::sh,
									1.0,
									*(new Vec2(-1,-7)),
									true
									){
std::string r_sh = "--";
this->is_alive = true;
this->wp = new Weapon(0.01, r_sh, 20.0f, true);
									}
Player::Player(): AGameObjects(){}
Player::~Player (){
	delete this->wp;
};
Player::Player(Player const & src){
	*this = src;
}
Player & Player::operator=(Player const & src){
	return *this;
	(const Player)src;
}

//____________________________
//________GETER-SETTER________
//____________________________

std::string Player::sh = "    |\\   \n><(((((o>";