/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:29:52 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:10:59 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string _Name );
		~ScavTrap();
		ScavTrap		&operator=( ScavTrap const & rhs );

		virtual void	attack(std::string const &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		void			guardGate(void);
};

#endif
