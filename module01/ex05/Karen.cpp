/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:46:10 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 17:03:21 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int		Karen::return_index(std::string level)
{
	std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (level.compare(levelList[i]) == 0)
			return (i);
	}
	return (-1);
}

void	Karen::complain(std::string level)
{
	void	(Karen::*funs[4])(void);
	int		i = return_index(level);

	if (i < 0)
	{
		std::cout << "Wrong Complain" << std::endl;
		return ;
	}
	funs[0] = &Karen::debug;
	funs[1] = &Karen::info;
	funs[2] = &Karen::warning;
	funs[3] = &Karen::error;
	(this->*funs[i])();
}
