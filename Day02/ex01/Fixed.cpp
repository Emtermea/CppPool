/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:21:24 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/06 16:21:26 by emtermea         ###   ########.fr       */
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

Fixed::Fixed (int const nb) {
	this->_n = roundf( nb * 256 );
	std::cout << "Int constructor called" << '\n';
}

Fixed::Fixed (float const nb) {
	this->_n = roundf( nb * 256.0 );
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed (Fixed const & src) {
	std::cout << "Copy constructor called" << '\n';
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << '\n';
	this->_n = rhs.getRawBits();

	return *this;
}

int Fixed::getRawBits () const {
	// std::cout << "getRawBits member function called" << '\n';

	return this->_n;
}

void Fixed::setRawBits (int const raw) {
	this->_n = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.getRawBits() / 256.0;
	return o;
}

float Fixed::toFloat () const {
	return this->_n / 256.0;
}

int	Fixed::toInt () const {
	return this->_n / 256;
}

const int Fixed::_bits = 8;
