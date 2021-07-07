/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:53:05 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 21:32:06 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

std::string	&Weapon::getType(void)
{
	std::string	&typeREF = type;
	
	return (typeREF);
}

void		Weapon::setType(std::string _type)
{
	this->type = _type;
}