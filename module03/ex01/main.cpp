/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/08/02 17:28:02 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap st1("ST1");
	ScavTrap st2("ST2");
	ClapTrap *st3 = new ScavTrap("ST3");

	std::cout << std::endl << st1;
	std::cout << std::endl << st2 << std::endl;

	st1.attack(st2.getName());
	st2.takeDamage(st1.getAttackDamage());
	st1.takeDamage(10);
	st1.beRepaired(10);
	st1.guardGate();

	std::cout << std::endl << st1;
	std::cout << std::endl << st2;
	delete st3;
}
