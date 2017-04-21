/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 02:41:22 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/05 02:41:23 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
	Brain _brain;

public:
	Human ();
	~Human ();

	std::string identify () const ;
	const Brain & getBrain () const;
};

#endif
