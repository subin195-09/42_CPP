/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:03:59 by skim              #+#    #+#             */
/*   Updated: 2021/07/20 14:21:32 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	count = 0;
	im = 0;
}

Squad::Squad( const Squad & src )
{
	this->count = 0;
	for(int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->im)
	{
		for (int i = 0; i < this->count; i++)
			delete this->im[i];
		delete this->im;
		this->im = 0;
	}
}

Squad &				Squad::operator=( Squad const & rhs )
{
	if (this != & rhs)
	{
		if (this->im)
		{
			for (int i = 0; i < this->count; i++)
				delete this->im[i];
			delete this->im;
			this->im = 0;
		}
		this->count = 0;
		for(int i = 0; i < rhs.getCount(); i++)
			this->push(rhs.getUnit(i)->clone());
	}
	return *this;
}

int				Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (count == 0 || n < 0 || n >= count)
		return (0);
	return (this->im[n]);
}

int				Squad::push(ISpaceMarine *ism)
{
	if (ism == 0)
		return (count);
	ISpaceMarine **cpy = new ISpaceMarine*[count + 1];
	for (int i = 0; i < count; i++)
	{
		if (im[i] == ism)
			return (count);
	}
	for (int i = 0; i < count ; i++)
		cpy[i] = this->im[i];
	cpy[count] = ism;
	delete [] im;
	im = cpy;
	count++;
	return (count);
}

