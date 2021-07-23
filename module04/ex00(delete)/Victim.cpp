/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:44:47 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:55:37 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim( const Victim & src )
{
	this->operator=(src);
}

Victim::Victim(std::string _name)
{
	this->name = _name;
	std::cout <<  "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}


Victim			&Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
	}
	return *this;
}

std::ostream	&operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

std::string		Victim::getName(void) const { return (this->name); }

void			Victim::setName(std::string _name) { this->name = _name; }

void			Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}
