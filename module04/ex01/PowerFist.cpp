/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:06:18 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 00:09:24 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Plasma Rifle", 50, 8)
{
}

PowerFist::PowerFist( const PowerFist & src ) : AWeapon("Plasma Rifle", 50, 8)
{
	this->operator=(src);
}

PowerFist::~PowerFist()
{
}

PowerFist	&PowerFist::operator=( PowerFist const & rhs )
{
	AWeapon::operator=(rhs);
	return *this;
}

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM *" << std::endl;
}
