/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:56:51 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 18:00:06 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { type = "none"; }

WrongAnimal::WrongAnimal(std::string _target) { type = _target; }

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	this->operator=(src);
}

WrongAnimal::~WrongAnimal() {}

WrongAnimal			&WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string		WrongAnimal::getType(void) const
{
	return (type);
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "Wronganimal Wronganimal" << std::endl;
}

