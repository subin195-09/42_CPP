/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:41:39 by skim              #+#    #+#             */
/*   Updated: 2021/08/11 17:02:31 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() { }

Span::Span(unsigned int _N) { N = _N;}

Span::Span( const Span & src )
{
	this->operator=(src);
}

Span::~Span() { }

Span		&Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->N = rhs.N;
		this->data = rhs.data;
	}
	return *this;
}

void		Span::addNumber( int number )
{
	if (data.size() >= N)
		throw FullNumber();
	data.push_back(number);
}

void		Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
	if (data.size() + end - begin > N)
		throw FullNumber();
	std::vector<int>::iterator it = begin;
	for (; it != end; ++it)
		data.push_back(*it);
}

long		Span::shortestSpan()
{
	if (data.size() <= 1)
		throw NotEnoughNumber();
	sort(data.begin(), data.end());
	std::vector<int>::iterator it = data.begin();
	long min = *(it + 1) - *it;
	for (; it != data.end() - 1; ++it)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return (min);
}

long		Span::longestSpan()
{
	if (data.size() <= 1)
		throw NotEnoughNumber();
	int ret = *(max_element(data.begin(), data.end())) - *(min_element(data.begin(), data.end()));
	return (ret);
}

const char	*Span::FullNumber::what(void) const throw()
{
	return ("FULL NUMBER");
}

const char	*Span::NotEnoughNumber::what(void) const throw()
{
	return ("NOT ENOUGH NUMBER");
}

