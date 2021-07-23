/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:00 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 16:28:22 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat") { }

Cat::Cat( const Cat & src ) : Animal("cat")
{
	this->operator=(src);
}

Cat::~Cat() { }

Cat		&Cat::operator=( Cat const & rhs )
{
	Animal::operator=(rhs);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyaaaa 😺" << std::endl;
}
