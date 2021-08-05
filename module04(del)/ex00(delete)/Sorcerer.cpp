/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:24:48 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:57:55 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string _name, std::string _title)
{
	this->name = _name;
	this->title = _title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	this->operator=(src);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer		&Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
	}
	return *this;
}

std::ostream	&operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", ";
	o << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

std::string		Sorcerer::getName(void) const { return (this->name); }

std::string		Sorcerer::getTitle(void) const { return (this->title); }

void			Sorcerer::setName(std::string _name) { this->name = _name; }

void			Sorcerer::setTitle(std::string _title) { this->title = _title; }

void			Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}
