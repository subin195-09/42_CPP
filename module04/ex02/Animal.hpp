/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:15:36 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 18:32:17 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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
		std::string		getType(void) const;
		virtual	void	makeSound(void) const = 0;
};

#endif
