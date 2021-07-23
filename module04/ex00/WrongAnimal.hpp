/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:00:42 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 18:01:28 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();
		WrongAnimal	&operator=( WrongAnimal const & rhs );
		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif
