/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 09:20:06 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/09 09:20:07 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemies.hpp"

//________CONSTRUCT___________

Enemies::Enemies() : AGameObjects(
						*(new Vec2(0.0f,0.0f)),
						Enemies::sh,
						(2.0f) ,
						*(new Vec2(-1,-1)),
						false
						){
}

Enemies::Enemies(Vec2 & pos) : AGameObjects(
						*(new Vec2(0.0f,0.0f)),
						Enemies::boss_sh,
						(2.0f) ,
						*(new Vec2(-6,-17)),
						false
						){
	this->pos = pos;
}

Enemies::~Enemies (){};
Enemies::Enemies(Enemies const & src){
	*this = src;
}
Enemies & Enemies::operator=(Enemies const & src){
	return *this;
	(const Enemies)src;
}

//____________________________

//________GETER-SETTER________
//____________________________

//________FUNCTIONS___________

void Enemies::spawn(Vec2 & pos, Vec2 & speed){
	this->is_alive = true;
	this->pos = pos;
	this->speed = speed;
}

void Enemies::die(void)
{
	this->is_alive = false;
}
//____________________________

std::string Enemies::sh = "/-\\\n\\-/";
std::string Enemies::boss_sh = "                   /^^^/              / ]\n                  /   ]              /  ]\n      __________ /    ]____         /   ]\n    /                       \\______/    /\n _ /       [@]   \\ \\                    \\\n/ . .             | |                    ]\n  VVVvvv\\         | |             _/\\    ]\n         |                      /     \\  ]\nAAA^^^^^                       /        \\]\n \\_____________\\   \\__________/\n              \\    \\\n                 \\____\\";