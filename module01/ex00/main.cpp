/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:35:31 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 16:44:49 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	randomName(void)
{
	std::string	name;

	name += (char)(rand() % 26 + 'A');
	name += (char)(rand() % 10 + '0');

	return (name);
}

std::string	setZombieType(void)
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

Zombie		*newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, setZombieType());

	return (zombie);
}

void		randomChump(std::string name)
{
	Zombie *zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}


int			main(void)
{
	srand((unsigned int)time(NULL));
	Zombie s_zombie = Zombie("stack_zombie", "stack_type");
	s_zombie.announce();

	for(int i = 0; i < 10; i++)
		randomChump(randomName());
	system("leaks zombie");
	return (0);
}
