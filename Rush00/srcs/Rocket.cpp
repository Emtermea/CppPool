/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rocket.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 16:12:42 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/09 16:12:45 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rocket.hpp"

Rocket::Rocket() : AGameObjects() {}
Rocket::~Rocket(){}
Rocket::Rocket(Rocket const & src){
	*this = src;
}
Rocket & Rocket::operator=(Rocket const & src){
	this->sh = src.sh;
	return *this;
}