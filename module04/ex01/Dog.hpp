/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:23:51 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:14:25 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog		&operator=( Dog const & rhs );
		Brain	*getBrain(void) const;
		virtual void	makeSound(void) const;
};

#endif
