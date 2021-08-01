/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:30:03 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:24:52 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "make ScavTrap" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string _Name ) : ClapTrap(_Name)
{
	std::cout << "make ScavTrap" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	std::cout << "make ScavTrap" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destroy" << std::endl;
}


ScavTrap	&ScavTrap::operator=( ScavTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap : ";
	std::cout << "<" + this->Name + "> attacks <" + target + ">";
	std::cout << " ,causing <" << this->AttackDamage << "> points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap : ";
	std::cout << "<" + this->Name + "> takes damage ";
	std::cout << amount << std::endl;
	HitPoints -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap : ";
	std::cout << "<" + this->Name + "> is repaired ";
	std::cout << amount << std::endl;
	EnergyPoint += amount;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "guardGate" << std::endl;
}
