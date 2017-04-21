/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:58:05 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/07 14:58:07 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <ostream>

class FragTrap {
private:
	unsigned int _HitPoints ;
	unsigned int _MaxHitpoints ;
	unsigned int _EnergyPoints  ;
	unsigned int _MaxEnergyPoints  ;
	unsigned int _Level ;
	unsigned int _MeleeAttackDamage ;
	unsigned int _RangedAttackDamage ;
	unsigned int _ArmorDamageReduction ;


public:
	FragTrap ();
	FragTrap (std::string name); // ok
	FragTrap ( FragTrap const & src ); //ok

	~FragTrap (); //ok
	std::string _name ; //parameter of constructor)
	
	int meleeAttack(std::string const & target); //ok
	void takeDamage(unsigned int amount) ; // ok
	void beRepaired(unsigned int amount) ; // ok
	int rangedAttack(std::string const & target) ; //ok

	int vaulthunter_dot_exe(std::string const & target); //ok

	FragTrap & operator=( FragTrap const & rhs ); //ok
};

#endif
