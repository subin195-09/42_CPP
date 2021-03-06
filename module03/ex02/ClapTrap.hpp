/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:00:50 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:47:56 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
	public:
		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap( std::string _Name );
		~ClapTrap();
		ClapTrap		&operator=( ClapTrap const & rhs );

		virtual void	attack(std::string const &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoint() const;
		unsigned int	getAttackDamage() const;
		void			setName( std::string _Name );
		void			setHitPoints( unsigned int _HitPoints );
		void			setEnergyPoint( unsigned int _EnergyPoint );
		void			setAttackDamage( unsigned int _AttackDamage );
};

std::ostream &	operator<<( std::ostream &os, ClapTrap const & rhs );

#endif
