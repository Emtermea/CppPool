/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 02:21:00 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 02:21:01 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	* PtrStr = &str;
	std::string & RefStr = str;

	std::cout << "Display with ptr : " << *PtrStr << '\n';
	std::cout << "Display with ref : " << RefStr << '\n';

	return 0;
}
