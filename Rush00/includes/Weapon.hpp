/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:10:49 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 11:10:50 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "Rocket.hpp"
# include "Scene.hpp"

class Weapon {
private:
	std::string _type;
	//int _nb_of_guns;

public:
	Weapon (void);
	Weapon (float cd, std::string & sh, float pwS, bool is_player);
	virtual ~Weapon ();
	Weapon (Weapon const &);
	Weapon & operator=(Weapon const &);

//	Vec2			dir;
	float			cd;
	float			pwS;
	std::clock_t	lastShoot;
	std::string		rocket_sh;

	void shoot(Vec2 & pos, Vec2 & speed, Scene *);
	bool is_player;
};


#endif
