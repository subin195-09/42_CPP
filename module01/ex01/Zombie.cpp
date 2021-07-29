/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:03:07 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 13:58:05 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string _name, std::string _type)
{
    name = _name;
    type = _type;
}

void    Zombie::announce(void)
{
    std::cout << "<" + name + " (" + type + ")> Braiiiiiinnss..." << std::endl;
}

void        Zombie::setName(std::string _name)
{
    this->name = _name;
}

void        Zombie::setType(std::string _type)
{
    this->type = _type;
}

std::string Zombie::getName(void)
{
    return (name);
}

std::string Zombie::getType(void)
{
    return (type);
}


Zombie::~Zombie()
{
    std::cout << "<" + name + " (" + type + ")> die!!!" << std::endl;
}
