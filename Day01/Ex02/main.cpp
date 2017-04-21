/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 18:13:55 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 18:13:57 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	srand(time(0));
	ZombieEvent randomm;
	Zombie * zombie1 = randomm.randomChump();
	delete zombie1;

	randomm.setZombieType("En decomposition");
	Zombie * zombie2 = randomm.randomChump();
	delete zombie2;

	return 0;
}
