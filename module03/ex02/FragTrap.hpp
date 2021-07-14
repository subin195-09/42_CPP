/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:02:19 by skim              #+#    #+#             */
/*   Updated: 2021/07/14 17:14:07 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap ( std::string _Name );
		~FragTrap();
		FragTrap &		operator=( FragTrap const & rhs );
		void	highFivesGuys(void);

};

#endif
