/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:30:03 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:05:30 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "make ScavTrap" << std::endl;
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap( std::string _Name ) : ClapTrap(_Name)
{
	std::cout << "make ScavTrap" << std::endl;
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	std::cout << "make ScavTrap" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destroy" << std::endl;
}

void		ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap : <" + this->Name + "> attacks <" + target + ">";
	std::cout << " ,causing <" << this->AttackDamage << "> points of damage!" << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void		ScavTrap::guardGate( void )
{
	std::cout << "guardGate" << std::endl;
}
