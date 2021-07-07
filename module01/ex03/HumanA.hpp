/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:58:12 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 21:33:59 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA {
	private:
		std::string		name;
		const Weapon	&weapon;
	public:
		HumanA(std::string _name, Weapon _weapon);
		void	attack();
};

#endif