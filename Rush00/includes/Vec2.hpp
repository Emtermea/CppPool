/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vec2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 18:47:47 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/08 18:47:48 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_HPP
# define VEC2_HPP

class Vec2 {
private:

public:

//________CONSTRUCT___________

	Vec2 (float, float);
	Vec2 (void);
	virtual ~Vec2(void);
	Vec2 (Vec2 const &);
	Vec2 & operator=(Vec2 const &);

//____________________________

	float y;
	float x;

};

#endif
