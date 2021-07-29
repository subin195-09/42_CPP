/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:03:07 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 14:51:30 by skim             ###   ########.fr       */
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
    std::cout << "<" + name + " (" + type + ")> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "<" + name + " (" + type + ")> die!!!" << std::endl;
}
