/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:56:44 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:35:54 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal constructor" << std::endl;
	type = "none";
}

Animal::Animal(std::string _target)
{
	std::cout << "animal constructor" << std::endl;
	type = _target;
}

Animal::Animal( const Animal & src )
{
	std::cout << "animal constructor" << std::endl;
	this->operator=(src);
}

Animal::~Animal()
{
	std::cout << "animal destructor" << std::endl;
}

Animal			&Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string	const	&Animal::getType(void) const
{
	return (type);
}

void				Animal::makeSound(void) const
{
	std::cout << "animal animal" << std::endl;
}

