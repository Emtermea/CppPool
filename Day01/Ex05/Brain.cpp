/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 02:40:50 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 02:40:51 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>
#include "Brain.hpp"

Brain::Brain () {
}

Brain::~Brain () {
}

std::string Brain::identify () const
{
	std::stringstream tmp;
	std::string BrainAdress;

	tmp << this ;
	BrainAdress = tmp.str();

	return BrainAdress;
}
