/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:56:44 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 18:32:00 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { type = "none"; }

Animal::Animal(std::string _target) { type = _target; }

Animal::Animal( const Animal & src )
{
	this->operator=(src);
}

Animal::~Animal() {}

Animal			&Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string		Animal::getType(void) const
{
	return (type);
}
