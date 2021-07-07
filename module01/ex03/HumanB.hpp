/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:59:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 21:34:09 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {
	private:
		std::string		name;
		const Weapon	*weapon;
	public:
		HumanB(std::string _name);
		void	setWeapon(Weapon weapon);
		void	attack();
};

#endif