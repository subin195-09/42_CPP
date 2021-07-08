/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:58:12 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 02:16:13 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA {
	private:
		std::string		name;
		Weapon	&weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		void	attack();
};

#endif
