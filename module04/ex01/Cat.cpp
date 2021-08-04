/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:00 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 18:17:04 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "cat constructor" << std::endl;
	this->brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal("Cat")
{
	std::cout << "cat constructor" << std::endl;
	this->brain = new Brain(*src.getBrain());
}

Cat::~Cat()
{
	std::cout << "cat destructor" << std::endl;
	delete this->brain;
}

Cat		&Cat::operator=( Cat const & rhs )
{
	if (this != &rhs)
	{
		Brain *copyBrain = new Brain(*rhs.getBrain());
		delete this->brain;
		this->brain = copyBrain;
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyaaaa 😺" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}
