/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 18:13:39 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 18:13:41 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent () : _type("presque vivant") {
}

ZombieEvent::~ZombieEvent () {
}

void ZombieEvent::setZombieType ( std::string type ) {
	this->_type = type;
}

Zombie * ZombieEvent::newZombie (std::string name) {
	Zombie * zombie = new Zombie (_type, name);

	return zombie;
}

Zombie * ZombieEvent::randomChump () {
	std::string name[] = {"Poule", "Bob l'eponge", "Pattoche", "Hitler", "Le Pen", "Belle", "Bulle", "Rebelle", "Ninja", "Sarko", "Jean-mi", "Tom", "Jerry"};
	int i = std::rand () % 13;

	Zombie * zombie = newZombie( name[i] );
	zombie->announce();

	return zombie;
}
