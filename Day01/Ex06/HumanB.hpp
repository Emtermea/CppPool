/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:32:17 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 21:32:18 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	/* data */

public:
	HumanB (std::string name);
	~HumanB ();

	Weapon *W;
	std::string name;

	void attack () const ;
	void setWeapon (Weapon &W) ;
};

#endif
