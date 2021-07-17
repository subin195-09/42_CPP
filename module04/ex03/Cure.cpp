/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:25:31 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 20:55:16 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure & src ) : AMateria("cure")
{
	this->operator=(src);
}

Cure::~Cure()
{
}

Cure		&Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
	{
		type = rhs.getType();
		xp = rhs.getXP();
	}
	return *this;
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter& target)
{
	this->xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
