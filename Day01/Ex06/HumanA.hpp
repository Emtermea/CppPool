/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:32:05 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 21:32:07 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	Weapon & _W;

public:
	HumanA (std::string name, Weapon &W);
	~HumanA ();

	std::string name;
	void attack () const ;
};

#endif
