/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:06:11 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/04 14:06:15 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony {
private:
	std::string _name;
	std::string _beauty;

public:
	Pony (std::string name, std::string beauty);
	~Pony ();
};

#endif
