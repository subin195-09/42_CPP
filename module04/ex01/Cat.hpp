/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:19:43 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 17:22:41 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	private:
		Brain		*brain;
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		Cat		&operator=( Cat const & rhs );
		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

#endif
