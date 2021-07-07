/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 19:50:10 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 20:23:10 by skim             ###   ########.fr       */
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
	Zombie	*horde = new Zombie[42];
	
	for(int i = 0; i < N; i++)
	{
		horde[i].name = name;
		horde[i].type = randomType();
		std::cout << i << " : ";
		horde[i].announce();
	}
	return (horde);
}