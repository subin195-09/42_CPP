/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:55:57 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 01:34:41 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		std::string name;
		int			ap;
		AWeapon		*weapon;
	public:
		Character();
		Character( std::string const &_name );
		Character( Character const & src );
		~Character();
		Character	&operator=( Character const & rhs );
		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;
};

std::ostream	&operator<<( std::ostream & o, Character const & i );

#endif
