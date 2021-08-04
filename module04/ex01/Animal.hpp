/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:15:36 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:13:18 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string _type);
		Animal( Animal const & src );
		virtual ~Animal();
		Animal	&operator=( Animal const & rhs );
		std::string	const	&getType(void) const;
		virtual	void		makeSound(void) const;
};

#endif
