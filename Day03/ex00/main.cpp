/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:58:14 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/07 14:58:17 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main ()
{
	srand(time(0));
	FragTrap toto("toto");
	FragTrap bob("bob");

	int dmg;

	dmg = toto.rangedAttack(bob._name);
	bob.takeDamage(dmg);
	toto.takeDamage(bob.meleeAttack(toto._name));
	bob.takeDamage(toto.vaulthunter_dot_exe(bob._name));
	toto.beRepaired(bob.rangedAttack(toto._name));
  	bob.takeDamage(toto.vaulthunter_dot_exe(bob._name));
  	return 1;
}
