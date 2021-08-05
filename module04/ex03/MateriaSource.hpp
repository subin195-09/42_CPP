/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:41:03 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 16:02:49 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*sources[4];
		int			count;
	public:
		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();
		MateriaSource	&operator=( MateriaSource const & rhs );

		void			learnMateria(AMateria *am);
		AMateria		*createMateria(std::string const & type);
};

#endif
