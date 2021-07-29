/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:44:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 14:50:47 by skim             ###   ########.fr       */
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
};

#endif
