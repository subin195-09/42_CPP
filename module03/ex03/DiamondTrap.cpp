/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:37:49 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 19:38:53 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "make DiamondTrap" << std::endl;
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "make DiamondTrap" << std::endl;
	this->operator=(src);
}

DiamondTrap::DiamondTrap( std::string _Name ) : ClapTrap(_Name + "_clap_name"), ScavTrap(_Name + "_clap_name"), FragTrap(_Name + "_clap_name")
{
	std::cout << "make DiamondTrap" << std::endl;
	Name_Dia = _Name + "_clap_name";
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(30);
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

void		DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << ClapTrap::getName() << std::endl;
}
