/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 19:55:29 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 14:58:07 by skim             ###   ########.fr       */
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

int	main(void)
{
	Zombie *horde = zombieHorde(42, randomName());

	for(int i = 0; i < 42; i++)
	{
		std::cout << i << " : ";
		horde[i].announce();
	}

	delete[] horde;
}
