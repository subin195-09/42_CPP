/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:42:52 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 16:05:53 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	count = 0;
	for (int i = 0; i < 4; i++)
		sources[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i = 0; i < 4; i++)
		sources[i] = src.sources[i];
	count = src.count;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < count; i++)
		delete this->sources[i];
}

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < count; i++)
		{
			delete sources[i];
			sources[i] = 0;
		}
		for (int i = 0; i < rhs.count; i++)
			this->sources[i] = rhs.sources[i]->clone();
		this->count = rhs.count;
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria *am)
{

	if (count >= 4 || !am)
		return ;
	sources[count++] = am;
}

AMateria		*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < count; i++)
	{
		if (sources[i]->getType() == type)
			return (sources[i]->clone());
	}
	return (0);
}

