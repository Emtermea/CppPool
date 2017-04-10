/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:09:07 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 11:09:09 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "AGameObjects.hpp"
# include "Weapon.hpp"

class Player : public AGameObjects{

//________CONSTRUCT___________

public:
	Player (void);
	Player (Vec2 &);
	virtual ~Player ();
	Player (Player const &);
	Player & operator=(Player const &);

//____________________________
//________GETER-SETTER________
//____________________________

	Weapon * wp;
private:
	//_score;
	//
	static std::string sh;
};


#endif
