/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 03:20:30 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 03:24:41 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	this->operator=(src);
}

TacticalMarine::~TacticalMarine()
{
}

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

ISpaceMarine		*TacticalMarine::clone() const
{

}

void				TacticalMarine::battleCry() const
{

}

void				TacticalMarine::rangedAttack() const
{

}

void				TacticalMarine::meleeAttack() const
{

}
