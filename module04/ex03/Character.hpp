/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:36:13 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 15:56:12 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*invent[4];
		int			count;
		Character();
	public:
		Character( std::string _name );
		Character( Character const & src );
		virtual ~Character();
		Character			&operator=( Character const & rhs );

		std::string	const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
