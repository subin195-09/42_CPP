/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 02:59:02 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 03:00:56 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class Squad : public ISquad
{
	public:

		Squad();
		Squad( Squad const & src );
		~Squad();
		Squad			&operator=( Squad const & rhs );
		int				getCount(void) const;
		ISpaceMarine	*getUnit(int n) const;
		int				push(ISpaceMarine *ism);
};

std::ostream &			operator<<( std::ostream & o, Squad const & i );

#endif /* *********************************************************** SQUAD_H */
