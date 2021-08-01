/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:06:33 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:34:38 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "make FragTrap" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
	std::cout << "make FragTrap" << std::endl;
}

FragTrap::FragTrap( std::string _Name ) : ClapTrap(_Name)
{
	std::cout << "make FragTrap" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destroy" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap : ";
	std::cout << "<" + this->Name + "> attacks <" + target + ">";
	std::cout << " ,causing <" << this->AttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap : ";
	std::cout << "<" + this->Name + "> takes damage ";
	std::cout << amount << std::endl;
	HitPoints -= amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap : ";
	std::cout << "<" + this->Name + "> is repaired ";
	std::cout << amount << std::endl;
	EnergyPoint += amount;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "positive highfives" << std::endl;
}
