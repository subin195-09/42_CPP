/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:29:52 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:02:35 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: public virtual ClapTrap
{
	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string _Name );
		~ScavTrap();
		void		attack(std::string const &target);
		ScavTrap	&operator=( ScavTrap const & rhs );
		void		guardGate(void);
};

#endif
