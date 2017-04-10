/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vec2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 18:46:29 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/08 18:46:32 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vec2.hpp"

//________CONSTRUCT___________


Vec2::Vec2(float y, float x) : y(y), x(x){}
Vec2::Vec2(){}
Vec2::~Vec2(){}
Vec2::Vec2(Vec2 const & src){
	*this = src;
}

Vec2 & Vec2::operator=(Vec2 const & src){
	this->x = src.x;
	this->y = src.y;
	return *this;
}

//____________________________
//________GETER-SETTER________

//____________________________

