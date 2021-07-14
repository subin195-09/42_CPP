/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 15:23:29 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap ct1("CT1");
	ClapTrap ct2("CT2");

	std::cout << ct1;
	ct1.attack(ct2.getName());
	ct1.takeDamage(10);
	ct1.beRepaired(10);
	std::cout << ct1;
}
