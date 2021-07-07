/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:21:04 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 21:25:54 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon _weapon)
{
	this->name = _name;
	this->weapon = _weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with this ";
	std::cout << weapon.getType() << std::endl;
}