/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 18:18:11 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct1("CT1");
	ClapTrap ct2("CT2");

	std::cout << ct1 << std::endl;
	std::cout << ct2 << std::endl;

	ct1.attack(ct2.getName());
	ct2.takeDamage(ct1.getAttackDamage());
	ct1.takeDamage(10);
	ct1.beRepaired(10);

	std::cout << std::endl << ct1;
	std::cout << std::endl << ct2;
}
