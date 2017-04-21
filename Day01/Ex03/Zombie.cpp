/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 18:13:14 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 18:13:16 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie () : _type("Maybe alive"), _name("Jacquie") {
}

Zombie::~Zombie () {
}

void Zombie::setZombieName ( std::string name ) {
	this->_name = name;
}

void Zombie::announce()
{
	std::cout << "< " << this->_name << " ( " << this->_type << " ) " << " >";
	std::cout << " Braiiiiiiinnnssss..." << '\n';
}
