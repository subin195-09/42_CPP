/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:17:31 by skim              #+#    #+#             */
/*   Updated: 2021/07/09 17:17:03 by skim             ###   ########.fr       */
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
	
	switch (i)
	{
		case 0:
			std::cout << "[ " + levelList[0] + " ]" << std::endl;
			karen.complain(levelList[0]);
			std::cout << std::endl;
		case 1:
			std::cout << "[ " + levelList[1] + " ]" << std::endl;
			karen.complain(levelList[1]);
			std::cout << std::endl;
		case 2:
			std::cout << "[ " + levelList[2] + " ]" << std::endl;
			karen.complain(levelList[2]);
			std::cout << std::endl;
		case 3:
			std::cout << "[ " + levelList[3] + " ]" << std::endl;
			karen.complain(levelList[3]);
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}