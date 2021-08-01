/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:31:39 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:44:38 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string _Name );
		~DiamondTrap();
		DiamondTrap	&operator=( DiamondTrap const & rhs );

		virtual void	attack(std::string const &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
		
		void		whoAmI(void);
};

#endif
