/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:37:49 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:57:21 by skim             ###   ########.fr       */
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

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap : ";
	std::cout << "<" + this->Name + "> takes damage ";
	std::cout << amount << std::endl;
	HitPoints -= amount;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap : ";
	std::cout << "<" + this->Name + "> is repaired ";
	std::cout << amount << std::endl;
	EnergyPoint += amount;
}

void		DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond Name: I'm " << this->Name << std::endl;
	std::cout << "ClapTrap Name: I'm " << ClapTrap::getName() << std::endl;
}
