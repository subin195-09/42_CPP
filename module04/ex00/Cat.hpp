/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:19:43 by skim              #+#    #+#             */
/*   Updated: 2021/08/04 17:04:08 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		Cat		&operator=( Cat const & rhs );
		virtual void	makeSound(void) const;
};

#endif
