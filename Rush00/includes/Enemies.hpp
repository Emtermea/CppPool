/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemies.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:08:55 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 11:08:56 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENEMIES_HPP
# define ENEMIES_HPP

# include "Vec2.hpp"
# include "AGameObjects.hpp"
# include "Weapon.hpp"

class Enemies : public AGameObjects{

private:
	/* data */

//________CONSTRUCT___________
public:
	Enemies (void);
	Enemies (Vec2 & pos);
	virtual ~Enemies ();
	Enemies (Enemies const &);
	Enemies & operator=(Enemies const &);

//____________________________
//________GETER-SETTER________
//____________________________

//________FUNCTIONS___________
	void spawn(Vec2 &, Vec2 &);
	void die();

//____________________________
	static std::string sh;
	static std::string boss_sh;
	Weapon * wp;
};

#endif
