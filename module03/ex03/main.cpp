/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 19:40:59 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap DT1("DT1");
	DiamondTrap DT2("");

	std::cout << DT1;
	DT1.attack(DT2.getName());
	DT2.takeDamage(DT1.getAttackDamage());
	DT1.takeDamage(10);
	DT1.beRepaired(10);
	DT1.highFivesGuys();
	std::cout << DT1;
	DT1 = DT2;
	std::cout << DT1;
}
