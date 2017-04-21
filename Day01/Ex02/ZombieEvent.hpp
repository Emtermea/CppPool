/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 18:13:47 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 18:13:49 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
private:
	std::string _type;

public:
	ZombieEvent ();
	~ZombieEvent ();

	void setZombieType ( std::string type );
	Zombie * newZombie ( std::string name );
	Zombie * randomChump ();
};

#endif
