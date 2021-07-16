/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 03:18:44 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 03:22:08 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	this->operator=(rhs);
}

AssaultTerminator::~AssaultTerminator()
{
}

AssaultTerminator &				AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	// if ( this != &rhs )
	// {
	// 	this->_value = rhs.getValue();
	// }
	return *this;
}

ISpaceMarine		*AssaultTerminator::clone() const
{

}

void				AssaultTerminator::battleCry() const
{

}

void				AssaultTerminator::rangedAttack() const
{

}

void				AssaultTerminator::meleeAttack() const
{

}

