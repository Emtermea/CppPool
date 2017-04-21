/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 16:38:00 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/13 16:38:01 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

template< typename T >
void display(T &a) {
	std::cout << a << '\n';
}

template< typename T>
void iter(T *array, size_t len, void (*funct) (T&)) {
	for (size_t i = 0; i < len; ++i) {
		funct(array[i]);
	}
}

int main (void) {

	int a[] = {42, 84, 21, 168, 4, 2, 0};
	char b[] = "blablablablablablablabla" ;
	std::string c[] = {"a", "function", "that", "is", "called", "on", "each", "element", "of", "the", "array"};

	std::cout << "int array : " << '\n';
	iter(a, 7, display );
	std::cout << "char array : " << '\n';
	iter(b , strlen(b), display);
	std::cout << "string array : " << '\n';
	iter(c , 11, display);
	return 0;
}
