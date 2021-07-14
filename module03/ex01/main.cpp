/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 16:59:47 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap ct1("ST1");
	ScavTrap ct2("ST2");

	std::cout << ct1;
	ct1.attack(ct2.getName());
	ct1.takeDamage(10);
	ct1.beRepaired(10);
	ct1.guardGate();
	std::cout << ct1;
	ct1 = ct2;
	std::cout << ct1;
}
