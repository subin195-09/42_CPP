/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:42:00 by skim              #+#    #+#             */
/*   Updated: 2021/08/08 20:42:01 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

MutantStack::MutantStack()
{
}

MutantStack::MutantStack( const MutantStack & src )
{
}


MutantStack::~MutantStack()
{
}

MutantStack &				MutantStack::operator=( MutantStack const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}
