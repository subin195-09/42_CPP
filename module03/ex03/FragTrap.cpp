/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:06:33 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 17:19:53 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "make FragTrap" << std::endl;
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
	std::cout << "make FragTrap" << std::endl;
}

FragTrap::FragTrap( std::string _Name ) : ClapTrap(_Name)
{
	std::cout << "make FragTrap" << std::endl;
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(20);
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

void		FragTrap::highFivesGuys(void)
{
	std::cout << "positive highfives" << std::endl;
}
