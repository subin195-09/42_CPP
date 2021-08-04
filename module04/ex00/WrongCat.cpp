/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:12:19 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 16:53:37 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
	this->operator=(src);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat		&WrongCat::operator=( WrongCat const & rhs )
{
	WrongAnimal::operator=(rhs);
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Mung 🐶" << std::endl;
}
