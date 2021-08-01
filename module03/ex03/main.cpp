/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:52:42 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap dt1("dt1");
	DiamondTrap dt2("dt2");

	std::cout << std::endl << dt1;
	std::cout << std::endl << dt2 << std::endl;

	dt1.attack(dt2.getName());
	dt2.takeDamage(dt1.getAttackDamage());
	dt1.takeDamage(10);
	dt1.beRepaired(10);

	std::cout << std::endl;
	dt1.whoAmI();
	dt1.guardGate();
	dt1.highFivesGuys();

	std::cout << std::endl << dt1;
	std::cout << std::endl << dt2;
}
