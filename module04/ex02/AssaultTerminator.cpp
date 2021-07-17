/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 03:18:44 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 15:30:51 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	this->operator=(src);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	return *this;
	(void)rhs;
}

ISpaceMarine		*AssaultTerminator::clone() const
{
	ISpaceMarine *copy = new AssaultTerminator(*this);
	return (copy);
}

void				AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}

