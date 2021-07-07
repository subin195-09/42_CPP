/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:44:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 20:22:55 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <cstring>
#include <iostream>

class Zombie{
    public:
        std::string name;
		std::string type;
        Zombie();
		Zombie(std::string _name, std::string _type);
        void	announce();
		~Zombie();
};

Zombie	*zombieHorde(int _size, std::string name);

#endif
