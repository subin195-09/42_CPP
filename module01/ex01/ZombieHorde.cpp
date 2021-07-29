/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 19:50:10 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 14:57:42 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	randomType(void)
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

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].setType(randomType());
	}
	return (horde);
}
