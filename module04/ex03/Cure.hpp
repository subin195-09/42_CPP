/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:22:56 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 18:25:26 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		Cure( Cure const & src );
		~Cure();
		Cure		&operator=( Cure const & rhs );
		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif
