/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:00 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:02:47 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "cat constructor" << std::endl;
}

Cat::Cat( const Cat & src ) : Animal("Cat")
{
	std::cout << "cat constructor" << std::endl;
	this->operator=(src);
}

Cat::~Cat()
{
	std::cout << "cat destructor" << std::endl;
}

Cat		&Cat::operator=( Cat const & rhs )
{
	Animal::operator=(rhs);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyaaaa 😺" << std::endl;
}
