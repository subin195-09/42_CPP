/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:05:51 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 16:23:01 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "make ClapTrap" << std::endl;
	HitPoints = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "make ClapTrap" << std::endl;
	this->operator=(src);
	HitPoints = src.HitPoints;
	EnergyPoint = src.EnergyPoint;
	AttackDamage = src.AttackDamage;
}

ClapTrap::ClapTrap( std::string _Name )
{
	std::cout << "make ClapTrap" << std::endl;
	Name = _Name;
	HitPoints = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destroy" << std::endl;
}

ClapTrap		&ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->Name = rhs.Name;
		this->HitPoints = rhs.HitPoints;
		this->EnergyPoint = rhs.EnergyPoint;
		this->AttackDamage = rhs.AttackDamage;
	}
	return *this;
}

void			ClapTrap::attack(std::string const &target)
{
	std::cout << "<" + this->Name + "> attacks <" + target + ">";
	std::cout << " ,causing <" << this->AttackDamage << "> points of damage!" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" + this->Name + "> takes damage ";
	std::cout << amount << std::endl;
	HitPoints -= amount;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" + this->Name + "> is repaired ";
	std::cout << amount << std::endl;
	EnergyPoint += amount;
}

std::string		ClapTrap::getName() const
{
	return Name;
}

unsigned int	ClapTrap::getHitPoints() const
{
	return HitPoints;
}

unsigned int	ClapTrap::getEnergyPoint() const
{
	return EnergyPoint;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return AttackDamage;
}

void			ClapTrap::setName( std::string _Name )
{
	Name = _Name;
}

void			ClapTrap::setHitPoints( unsigned int _HitPoints )
{
	HitPoints = _HitPoints;
}

void			ClapTrap::setEnergyPoint( unsigned int _EnergyPoint )
{
	EnergyPoint = _EnergyPoint;
}

void			ClapTrap::setAttackDamage( unsigned int _AttackDamage )
{
	AttackDamage = _AttackDamage;
}


std::ostream &	operator<<( std::ostream &os, ClapTrap const & rhs )
{
	os << "Name : " << rhs.getName() << std::endl;
	os << "HitPoints : " << rhs.getHitPoints() << std::endl;
	os << "EnergyPoint : " << rhs.getEnergyPoint() << std::endl;
	os << "AttackDamage : " << rhs.getAttackDamage() << std::endl;
	return os;
}
