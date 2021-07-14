/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:00:50 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 15:21:41 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
	private:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
	public:
		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap( std::string _Name );
		~ClapTrap();
		ClapTrap	&operator=( ClapTrap const & rhs );
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoint() const;
		unsigned int	getAttackDamage() const;
};

std::ostream &	operator<<( std::ostream &os, ClapTrap const & rhs );
