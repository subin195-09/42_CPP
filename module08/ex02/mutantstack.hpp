/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:41:33 by skim              #+#    #+#             */
/*   Updated: 2021/08/11 19:31:27 by skim             ###   ########.fr       */
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
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();
		MutantStack &		operator=( MutantStack const & rhs );

		iterator	begin(void);
		iterator	end(void);
		reverse_iterator	rbegin(void);
		reverse_iterator	rend(void);
};

# include "mutantstack.cpp"
#endif
