/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:05 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:44:56 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "dog constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal("Dog")
{
	std::cout << "dog constructor" << std::endl;
	this->brain = new Brain(*src.getBrain());
}

Dog::~Dog()
{
	std::cout << "dog destructor" << std::endl;
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
