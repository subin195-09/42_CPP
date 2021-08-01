/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:33:52 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap ft1("FT1");
	FragTrap ft2("FT2");

	std::cout << std::endl << ft1;
	std::cout << std::endl << ft2 << std::endl;

	ft1.attack(ft2.getName());
	ft2.takeDamage(ft1.getAttackDamage());
	ft1.takeDamage(10);
	ft1.beRepaired(10);
	ft1.highFivesGuys();

	std::cout << std::endl << ft1;
	std::cout << std::endl << ft2;
}
