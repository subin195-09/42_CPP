/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:31:39 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:06:49 by skim             ###   ########.fr       */
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
		void		attack(std::string const &target);
		void		whoAmI(void);
};

#endif
