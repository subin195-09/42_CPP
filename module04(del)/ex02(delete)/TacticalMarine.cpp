/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 03:20:30 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 15:02:23 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	this->operator=(src);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine		&TacticalMarine::operator=( TacticalMarine const & rhs )
{
	return *this;
	(void)rhs;
}

ISpaceMarine		*TacticalMarine::clone() const
{
	ISpaceMarine *copy = new TacticalMarine(*this);
	return (copy);
}

void				TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack() const
{
	std::cout << "* attack with a chainsword *" << std::endl;
}
