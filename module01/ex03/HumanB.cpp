/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:26:31 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 02:16:52 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
}

void	HumanB::setWeapon(Weapon _weapon)
{
	this->weapon = &_weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with this ";
	std::cout << weapon->getType() << std::endl;
}
