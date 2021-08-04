/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:05 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 16:50:47 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "dog constructor" << std::endl;
}

Dog::Dog( const Dog & src ) : Animal("Dog")
{
	std::cout << "dog constructor" << std::endl;
	this->operator=(src);
}

Dog::~Dog()
{
	std::cout << "dog destructor" << std::endl;
}

Dog		&Dog::operator=( Dog const & rhs )
{
	Animal::operator=(rhs);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Mung 🐶" << std::endl;
}
