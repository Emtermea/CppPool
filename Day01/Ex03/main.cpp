/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 01:25:19 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 01:25:20 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int	main ()
{
	srand(time(0));
	ZombieHorde HordeZombies(6);
	return 0;
}
