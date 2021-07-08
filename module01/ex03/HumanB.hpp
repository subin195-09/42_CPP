/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:59:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 02:15:08 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {
	private:
		std::string		name;
		Weapon	*weapon;
	public:
		HumanB(std::string _name);
		void	setWeapon(Weapon weapon);
		void	attack();
};

#endif
