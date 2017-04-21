/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:32:23 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 21:32:24 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB (std::string nam) : name(nam) {
	this->name = nam ;
}

HumanB::~HumanB () {
}

void HumanB::attack () const {
	std::cout << this->name << " attacks with his " << this->W->getType() << '\n';
}

void HumanB::setWeapon (Weapon &W) {
	this->W = &W;
}
