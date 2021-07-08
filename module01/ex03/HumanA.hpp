/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:58:12 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 16:33:07 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_HPP
# define HUMAN_A_HPP

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
