/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:06:24 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 14:06:26 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony*	poney = new Pony("BibicheOnHeap", "Yes");
	delete poney;
}

void ponyOnTheStack()
{
	Pony poney = Pony("PoupouleOnStack", "No");
}

int	main()
{
	std::cout << "Function for allocate Poney on the Stack" << '\n';
	ponyOnTheStack();
	std::cout << "Function for allocate Poney on the Heap" << '\n';
	ponyOnTheHeap();

	return 0;
}
