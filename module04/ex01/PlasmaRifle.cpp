/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:59:24 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 00:05:27 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src ) : AWeapon("Plasma Rifle", 21, 5)
{
	this->operator=(src);
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle	&PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	AWeapon::operator=(rhs);
	return *this;
}

void		PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
