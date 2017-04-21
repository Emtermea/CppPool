/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:40:22 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/03 18:40:27 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main (int ac, char **av) {

	int i = 1;
	int j = 0;
	
	while (av[i])
	{
		while (av[i][j])
		{
			std::cout << (char)toupper(av[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
