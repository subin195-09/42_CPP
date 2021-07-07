/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:26:31 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 21:29:02 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name);
{
	this->name = _name;
}

void	HumanB::setWeapon(Weapon _weapon)
{
	this->weapon = _weapon;
}

HumanB::HumanB(std::string _name, Weapon _weapon)
{
	this->name = _name;
	this->weapon = _weapon;
}