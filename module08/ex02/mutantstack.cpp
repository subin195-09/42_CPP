/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:42:00 by skim              #+#    #+#             */
/*   Updated: 2021/08/11 19:25:45 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src )
{
	this->operator=(src);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>		&MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
	(void)rhs;
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return this->c.end();
}

#endif
