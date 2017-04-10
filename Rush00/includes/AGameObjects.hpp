/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameObjects.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:07:06 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 19:54:11 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGAMEOBJECTS_HPP
# define AGAMEOBJECTS_HPP

# include <iostream>
# include "Vec2.hpp"
# include <sstream>
# include <ncurses.h>
# include <curses.h>

class AGameObjects {


public:

//________CONSTRUCT___________

	AGameObjects (void);
	AGameObjects (Vec2 & pos, std::string &, float, Vec2 & offSet, bool is_alive);

	virtual ~AGameObjects ();
	AGameObjects(AGameObjects const &);
	AGameObjects & operator=(AGameObjects const &);

//____________________________
//________GETER-SETTER________
//____________________________

	bool collideWith(AGameObjects &);

	// size
 	Vec2		pos;
	Vec2		speed;
	std::string	sh;
	double		size;
	Vec2		offSet;
	bool		is_alive;

//________FUNCTIONS___________

	void	display();
	void	updatePos(double);

//____________________________
	private:
};

#endif
