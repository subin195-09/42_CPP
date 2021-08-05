/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:40:35 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 01:49:57 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & _name, int _damage, int _apcost)
{
	name = _name;
	apcost = _apcost;
	damage = _damage;
}

AWeapon::AWeapon( const AWeapon & src )
{
	this->operator=(src);
}

AWeapon::~AWeapon()
{
}

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->apcost = rhs.getAPCost();
		this->damage = rhs.getDamage();
	}
	return *this;
}

std::string		AWeapon::getName(void) const
{
	return (this->name);
}

int				AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int				AWeapon::getDamage(void) const
{
	return (this->damage);
}
