/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:44:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 13:56:44 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cstring>
#include <iostream>

class Zombie{
    private:
        std::string name;
		std::string type;
    public:
        Zombie();
		Zombie(std::string _name, std::string _type);
        void	announce();
		~Zombie();
        void        setName(std::string _name);
        void        setType(std::string _type);
        std::string getName(void);
        std::string getType(void);
};

Zombie	*zombieHorde(int _size, std::string name);

#endif
