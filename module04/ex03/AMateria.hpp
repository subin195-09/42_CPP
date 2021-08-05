/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:56:08 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 18:28:35 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string		type;
		unsigned int	xp;
	public:
		AMateria();
		AMateria(std::string const & _type);
		AMateria( AMateria const & src );
		virtual ~AMateria();
		AMateria			&operator=( AMateria const & rhs );
		std::string const	&getType() const;
		unsigned int		getXP() const;

		virtual	AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
