/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:19:40 by skim              #+#    #+#             */
/*   Updated: 2021/07/04 19:38:45 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	ZombieEvent::setZombieType(void)
{
	std::string	type[10];

	type[0] = "red";
	type[1] = "orange";
	type[2] = "yellow";
	type[3] = "green";
	type[4] = "blue";
	type[5] = "navy";
	type[6] = "purple";
	type[7] = "black";
	type[8] = "white";
	type[9] = "pink";
	return (type[rand() % 10]);
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, setZombieType());
	
	return (zombie);
}
