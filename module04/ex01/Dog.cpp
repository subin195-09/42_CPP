/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:05 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 18:07:26 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal("Dog")
{
	this->brain = new Brain(*src.getBrain());
}

Dog::~Dog()
{
	delete this->brain;
}

Dog		&Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
	{
		this->Animal::operator=(rhs);
		Brain *copyBrain = new Brain(*rhs.getBrain());
		delete this->brain;
		this->brain = copyBrain;
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Mung 🐶" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}
