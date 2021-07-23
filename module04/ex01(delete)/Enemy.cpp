/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:16:37 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 00:31:32 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int _hp, std::string const &_type)
{
	hp = _hp;
	type = _type;
}

Enemy::Enemy( const Enemy & src )
{
	this->operator=(src);
}

Enemy::~Enemy()
{
}

Enemy	&Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->hp = rhs.getHP();
		this->type = rhs.getType();
	}
	return *this;
}

std::string	Enemy::getType() const
{
	return (this->type);
}

int			Enemy::getHP() const
{
	return (this->hp);
}

void		Enemy::takeDamage(int _damage)
{
	this->hp -= _damage;
	if (this->hp < 0)
		this->hp = 0;
}
