/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 14:14:35 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/06 14:14:36 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed {
private:
	int	_n;
	static const int _bits;

public:
	Fixed ();
	Fixed (Fixed const & src);
	~Fixed ();

	Fixed & operator=( Fixed const & rhs);
	int getRawBits () const ;
	void setRawBits ( int const raw ) ;
};

#endif
