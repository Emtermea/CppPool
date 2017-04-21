/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:57:58 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/07 14:57:59 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::~FragTrap () {
	std::cout << "FR4G-TP < " << this->_name << " > is dead... (Destructor)" << '\n';
}

FragTrap::FragTrap (std::string name) : _HitPoints(100), _MaxHitpoints(100),
_EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDamage(30),
_RangedAttackDamage(20), _ArmorDamageReduction(5), _name(name) {
	this->_name = name;
	std::cout << "FR4G-TP < " << this->_name << " > start a new game (Constructor) " << '\n';
}

FragTrap::FragTrap (FragTrap const & src ) {
	*this = src;
}

int FragTrap::meleeAttack (std::string const & target) {
	std::cout <<" FR4G-TP < " << this->_name <<" > attacks < " << target << " > in melee, causing < "<< this->_MeleeAttackDamage << " > points of damage ! " << std::endl;

	return this->_MeleeAttackDamage;
}

void FragTrap::takeDamage (unsigned int amount) {
	amount = amount - this->_ArmorDamageReduction;
	this->_HitPoints = this->_HitPoints - amount;
	std::cout << "< " << this->_name <<" > take < " << amount << " > damage !!!" <<std::endl;
	if (this->_HitPoints == 0)
		std::cout << "I'll stop talking when I'm dead!" << std::endl;

}

void FragTrap::beRepaired (unsigned int amount) {
	this->_HitPoints = this->_HitPoints + amount;
	if (this->_HitPoints > this->_MaxHitpoints)
		this->_HitPoints = this->_MaxHitpoints;
}

int FragTrap::rangedAttack ( std::string const & target ) {
	std::cout <<"FR4G-TP < " << this->_name << " > attacks < " << target << " > at range, causing < "<< this->_RangedAttackDamage << " > points of damage ! " << std::endl;

	return this->_RangedAttackDamage;
}

int FragTrap::vaulthunter_dot_exe (std::string const & target) {
	int	i;
	std::string ref[] = {"Care bears throw (1)", "Water bomb (2)", "Dance time! (3)", "Sing time! (4)", "Tickles (5)"};

	i = rand() % 5;
	if (this->_EnergyPoints < 25) {
		std::cout << "NOT ENOUGH ENERGY !" <<std::endl;
		return 0;
	}
	std::cout << target << " suffered "<< ref[i] << std::endl;
	this->_EnergyPoints = this->_EnergyPoints - 25;
	return (i + 1) * 10 ;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_Level = rhs._Level;

	return *this;
}
