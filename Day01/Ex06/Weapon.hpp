/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:31:44 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 21:31:47 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	/* data */

public:
	Weapon ( std::string type);
	~Weapon ();

	std::string type;
	const std::string & getType () const ;
	void setType (std::string type);
};

#endif
