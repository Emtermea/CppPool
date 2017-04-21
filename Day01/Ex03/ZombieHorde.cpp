/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 01:25:01 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 01:25:02 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde (int n) {
	int nbZ_create = 0;
	int i;
	this->_HordeZombies = new Zombie [n];

	std::string name[] = {"Poule", "Bob l'eponge", "Pattoche", "Hitler", "Le Pen", "Belle", "Bulle", "Rebelle", "Ninja", "Sarko", "Jean-mi", "Tom", "Jerry"};

	while (nbZ_create < n)
	{
		i = std::rand () % 13;
		_HordeZombies[nbZ_create].setZombieName( name[i] );
		_HordeZombies[nbZ_create].announce();
		nbZ_create++;
	}
}

ZombieHorde::~ZombieHorde () {
	delete [] _HordeZombies;
}
