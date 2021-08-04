/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:39:42 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 18:45:42 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	count = 0;
	for (int i = 0; i < 4; i++)
		invent[i] = 0;
}

Character::Character( std::string _name)
{
	name = _name;
	count = 0;
	for (int i = 0; i < 4; i++)
		invent[i] = 0;
}

Character::Character( const Character & src )
{
	this->operator=(src);
}

Character::~Character()
{
	for (int i = 0; i < count; i++)
		delete this->invent[i];
}

Character			&Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->count = 0;
		for (int i = 0; i < rhs.count; i++)
			this->invent[i] = rhs.invent[i]->clone();
		this->count = rhs.count;
	}
	return *this;
}

std::string	const	&Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	if (!m || count >= 4)
		return ;
	for (int i = 0; i < count; i++)
	{
		if (invent[i] == m)
			return ;
	}
	invent[count++] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !invent[idx])
		return ;
	invent[idx] = 0;
	for (int i = idx + 1; i < 4; i++)
		invent[i - 1] = invent[i];
	count--;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx > count || idx < 0 || !invent[idx])
		return ;
	invent[idx]->use(target);
}
