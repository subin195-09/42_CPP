/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:58:12 by skim              #+#    #+#             */
/*   Updated: 2021/07/29 16:52:56 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {
	private:
		std::string		name;
		Weapon			&weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		void	attack();
};

#endif
