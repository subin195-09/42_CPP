/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 03:16:16 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 03:17:40 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();
		AssaultTerminator	&operator=( AssaultTerminator const & rhs );
		ISpaceMarine		*clone()  const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
