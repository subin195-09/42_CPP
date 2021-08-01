/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:02:19 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 17:44:03 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap ( std::string _Name );
		~FragTrap();
		FragTrap &		operator=( FragTrap const & rhs );

		virtual void	attack(std::string const &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		void	highFivesGuys(void);
};

#endif
