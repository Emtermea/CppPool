/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 14:14:41 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/06 14:14:43 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed () : _n(0) {
	std::cout << "Default constructor called" << '\n';
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << '\n';
}

Fixed::Fixed (Fixed const & src) {
	std::cout << "Copy constructor called" << '\n';
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << '\n';
	this->_n = rhs.getRawBits();

	return *this;
}

int Fixed::getRawBits () const
{
	std::cout << "getRawBits member function called" << '\n';

	return this->_n;
}

void Fixed::setRawBits (int const raw)
{
	this->_n = raw;
}

const int Fixed::_bits = 8;
