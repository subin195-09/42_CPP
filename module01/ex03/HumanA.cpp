/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:21:04 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 02:55:52 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon)
{
	name = _name;
}

void	HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}
