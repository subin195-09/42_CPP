/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:37:49 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:08:36 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "make DiamondTrap" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "make DiamondTrap" << std::endl;
	this->operator=(src);
}

DiamondTrap::DiamondTrap( std::string _Name ) : ClapTrap(_Name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "make DiamondTrap" << std::endl;
	this->Name = _Name;
	this->HitPoints = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destroy" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void		DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}


void		DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->Name << std::endl;
}
