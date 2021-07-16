/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:41:10 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 01:35:23 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
	this->operator=(src);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant	&SuperMutant::operator=( SuperMutant const & rhs )
{
	Enemy::operator=(rhs);
	return *this;
}

void		SuperMutant::takeDamage(int _damage)
{
	this->hp -= _damage + 3;
	if (this->hp < 0)
		this->hp = 0;
}
