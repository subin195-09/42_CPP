/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:17:31 by skim              #+#    #+#             */
/*   Updated: 2021/07/09 17:04:02 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Wrong Argument" << std::endl;
		return (1);
	}
	Karen		karen;
	std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = return_index(av[1]);

	if (i < 0)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	for (int j = i; j < 4; j++)
	{
		std::cout << "[ " + levelList[j] + " ]" << std::endl;
		karen.complain(levelList[j]);
		std::cout << std::endl;
	}
	return (0);
}