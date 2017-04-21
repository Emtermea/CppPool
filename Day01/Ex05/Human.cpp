/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 02:41:10 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 02:41:12 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human () {
}

Human::~Human () {
}

std::string Human::identify () const
{
	std::string brain;
	brain = this->_brain.identify();

	return brain;
}

const Brain & Human::getBrain () const {
	return this->_brain;
}
