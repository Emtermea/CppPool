/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rocket.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:10:59 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/08 11:11:01 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROCKET_HPP
# define ROCKET_HPP
# include "AGameObjects.hpp"

class Rocket : public AGameObjects{
private:


public:
	Rocket (void);

	virtual ~Rocket ();
	Rocket (Rocket const &);
	Rocket & operator=(Rocket const &);

	bool is_player;

};

#endif
