/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:14:41 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:14:42 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::string	whyrano[] = {
		"🐢",
		"🐙",
		"🐏",
		"🐣",
		"🌈",
		"🐰",
		"🐹",
		"🐭",
		"🐱",
		"🐻"
	};
	std::cout << "Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = whyrano[rand() % (sizeof(whyrano) / sizeof(std::string))];
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain Copy Constructor" << std::endl;
	this->operator=(src);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain	&Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}
