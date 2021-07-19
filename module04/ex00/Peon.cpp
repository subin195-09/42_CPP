/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:01:43 by skim              #+#    #+#             */
/*   Updated: 2021/07/19 15:30:49 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim("nono") {}

Peon::Peon(std::string _name) : Victim(_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim("nono")
{
	this->operator=(src);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon		&Peon::operator=( Peon const & rhs )
{
	Victim::operator=(rhs);
	return *this;
}

void		Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}
