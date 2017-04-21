/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 18:13:23 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 18:13:25 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

private:
	std::string _type;
	std::string _name;

public:
	Zombie (std::string name, std::string type);
	~Zombie ( void );

	void announce ( void );
};

#endif
