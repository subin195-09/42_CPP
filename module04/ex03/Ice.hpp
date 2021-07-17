/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:31:56 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 18:32:52 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		Ice( Ice const & src );
		~Ice();
		Ice			&operator=( Ice const & rhs );
		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif
