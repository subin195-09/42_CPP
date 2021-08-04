/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:23:51 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:04:26 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog		&operator=( Dog const & rhs );
		virtual void	makeSound(void) const;
};

#endif
