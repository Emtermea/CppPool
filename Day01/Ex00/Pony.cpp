/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:06:02 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 14:06:03 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony (std::string name, std::string beauty) : _name(name), _beauty(beauty)
{
	std::cout << "  Ouah ! A new poney, his name is " << this->_name << '\n';
	std::cout << "  Is beautyfull ? " << this->_beauty << '\n';
}

Pony::~Pony () {
	std::cout << this->_name << " died"<< '\n';
}
