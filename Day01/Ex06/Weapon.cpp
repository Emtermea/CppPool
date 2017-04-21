/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:31:36 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 21:31:38 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string typ) : type(typ) {
	this->type = typ;
}

Weapon::~Weapon () {
}

const std::string & Weapon::getType () const {
	return this->type ;
}

void Weapon::setType (std::string type){
	this->type = type;
}
