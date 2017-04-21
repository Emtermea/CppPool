/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:21:34 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/06 16:21:35 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <ostream>

class Fixed {
private:
	int	_n;
	static const int _bits;

public:
	Fixed ();
	Fixed (int const nb);
	Fixed (float const nb);
	Fixed (Fixed const & src);
	~Fixed ();

	float toFloat () const ;
	int	toInt () const;

	int getRawBits () const ;
	void setRawBits ( int const raw ) ;
	Fixed & operator=( Fixed const & rhs);
};

	std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
