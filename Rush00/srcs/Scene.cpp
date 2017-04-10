/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scene.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 20:39:15 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/09 20:39:16 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scene.hpp"


Scene::Scene(){}
Scene::~Scene(){}
Scene::Scene(Scene const & src){
	*this = src;
}
Scene & Scene::operator=(Scene const &){
	return *this;
}
