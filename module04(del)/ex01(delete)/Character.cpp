/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:58:51 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 01:51:51 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	ap = 40;
	weapon = 0;
}

Character::Character(std::string const &_name)
{
	name = _name;
	ap = 40;
	weapon = 0;
}

Character::Character( const Character & src )
{
	this->operator=(src);
}

Character::~Character()
{
}

Character		&Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
	}
	return *this;
}

std::ostream	&operator<<( std::ostream & o, Character const & i )
{
	if (!i.getWeapon())
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	return o;
}

void			Character::recoverAP(void)
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void			Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void			Character::attack(Enemy *enemy)
{
	if (!weapon || ap - weapon->getAPCost() < 0)
		return ;
	std::cout << this->name << " attack " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	ap -= weapon->getAPCost();
	if (enemy->getHP() < 0)
		delete enemy;
}

std::string		Character::getName(void) const
{
	return (this->name);
}

int				Character::getAP(void) const
{
	return (this->ap);
}

AWeapon			*Character::getWeapon(void) const
{
	return (this->weapon);
}
