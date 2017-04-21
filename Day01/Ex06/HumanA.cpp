/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:31:59 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 21:32:01 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA (std::string nam, Weapon &W) : _W(W), name(nam) {
}

HumanA::~HumanA () {
}

void HumanA::attack () const {
	std::cout << this->name << " attacks with his " << this->_W.getType() << '\n';
}
