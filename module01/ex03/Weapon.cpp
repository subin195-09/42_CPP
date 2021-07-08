/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:53:05 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 02:55:22 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

std::string	const &Weapon::getType(void)
{
	return (type);
}

void		Weapon::setType(std::string _type)
{
	this->type = _type;
}
