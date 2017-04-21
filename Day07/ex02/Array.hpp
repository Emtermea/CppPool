/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:30:53 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/13 18:30:57 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >
class Array {

private:

	T*				_array;
	unsigned int	_size;

public:

	Array< T >() : _array(NULL), _size(0) {}

	T & operator[] (int idx) {
		if (idx < 0 || static_cast<unsigned int>(idx) >= _size || !_array)
			throw std::exception();
		return _array[idx];
	}

	T operator[] (int idx) const {
		if (idx < 0 || static_cast<unsigned int>(idx) >= _size || !_array)
			throw std::exception();
		return _array[idx];
	}

	Array< T >(unsigned int n) : _array( new T[n] ), _size(n) {
		for (unsigned int i = 0; i < n; ++i) {
			_array[i] = T();
		}
	}

	Array< T > & operator=(Array< T > const & rhs)
	{
		_size = rhs.size();
		_array = new T[_size];
		for (int i = 0; static_cast<unsigned int>(i) < _size; ++i)
			_array[i] = rhs[i];
		return *this;
	}

	Array< T >(const Array< T > & src) { *this = src; }

	~Array< T > () {
		if (_array)
			delete[] _array;
	}

	unsigned int	size() const { return _size; }
};

#endif
