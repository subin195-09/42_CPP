/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:41:33 by skim              #+#    #+#             */
/*   Updated: 2021/08/08 20:42:34 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>

template<typename T>
class MutantStack
{

	public:

		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();

		MutantStack &		operator=( MutantStack const & rhs );

	private:

};

#endif
