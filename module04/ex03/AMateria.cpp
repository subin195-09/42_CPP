/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:00:50 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 15:54:30 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	xp = 0;
	type = "none";
}

AMateria::AMateria(std::string const & _type)
{
	xp = 0;
	int i = -1;
	while (_type[++i])
		type += tolower(_type[i]);
}

AMateria::AMateria( const AMateria & src )
{
	this->operator=(src);
}

AMateria::~AMateria()
{
}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->xp = rhs.getXP();
		this->type = rhs.getType();
	}
	return *this;
}

std::string const	&AMateria::getType() const
{
	return type;
}

unsigned int		AMateria::getXP() const
{
	return xp;
}

void				AMateria::use(ICharacter &target)
{
	xp += 10;
	std::cout << "AMateria : " << target.getName() << " use " << std::endl;
}
