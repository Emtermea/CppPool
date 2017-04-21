/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:59:54 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/13 17:59:56 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main( void )
{
	// int * a = new int();
	// std::cout << "a = "<< a << '\n';

	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float arrf[] = {0.01f, 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f};
	int i = 0;

	Array<int> a(10);
	Array<int> x(10);
	Array<float> b(10);
	std::cout << "( int ) a size = " << a.size() << std::endl;
	std::cout << "( float ) b size = " << b.size() << std::endl;

	while (i <= 8)
	{
		try
		{
			std::cout << "( int ) a index: " << i << "/" << a.size() << std::endl;
			std::cout << "( float ) b index: " << i << "/" << b.size() << std::endl;
			a[i] = arr[i];
			b[i] = arrf[i];
			std::cout << "( int ) a[" << i << "] = " << a[i] << std::endl;
			std::cout << "( float ) b[" << i << "] = " << b[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		i++;
	}
	Array<int> c(a);
	c[7] =972 ;
	std::cout << c[7] <<std::endl;
	std::cout << a[5] <<std::endl;

	return 0;
}
