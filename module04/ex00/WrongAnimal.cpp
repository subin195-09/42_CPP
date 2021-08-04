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

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor" << std::endl;
	type = "none";
}

WrongAnimal::WrongAnimal(std::string _target)
{
	std::cout << "WrongAnimal constructor" << std::endl;
	type = _target;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal constructor" << std::endl;
	this->operator=(src);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

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

