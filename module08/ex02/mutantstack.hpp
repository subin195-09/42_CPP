/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:41:33 by skim              #+#    #+#             */
/*   Updated: 2021/08/11 19:09:05 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();
		MutantStack &		operator=( MutantStack const & rhs );

		iterator	begin(void);
		iterator	end(void);
};

# include "mutantstack.cpp"
#endif
