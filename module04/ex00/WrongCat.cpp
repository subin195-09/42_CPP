/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:12:19 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 18:13:16 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") { }

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal("WrongCat")
{
	this->operator=(src);
}

WrongCat::~WrongCat() { }

WrongCat		&WrongCat::operator=( WrongCat const & rhs )
{
	WrongAnimal::operator=(rhs);
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Mung 🐶" << std::endl;
}
