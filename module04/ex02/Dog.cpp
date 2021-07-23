/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:05 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 16:28:02 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { }

Dog::Dog( const Dog & src ) : Animal("Dog")
{
	this->operator=(src);
}

Dog::~Dog() { }

Dog		&Dog::operator=( Dog const & rhs )
{
	Animal::operator=(rhs);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Mung 🐶" << std::endl;
}
