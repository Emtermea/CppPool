/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scene.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 20:39:24 by jbelless          #+#    #+#             */
/*   Updated: 2017/04/09 20:39:25 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_HPP
# define SCENE_HPP

#include "Rocket.hpp"

class Scene{

public:
	virtual Rocket * findDeadRocket(void) = 0;

	Scene (void);
	virtual ~Scene ();
	Scene (Scene const &);
	Scene & operator=(Scene const &);

};

#endif
