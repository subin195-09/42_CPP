/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:26:01 by skim              #+#    #+#             */
/*   Updated: 2021/08/22 15:11:09 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <math.h>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	data;
		Span();
	public:
		Span(unsigned int _N);
		Span( Span const & src );
		~Span();
		Span		&operator=( Span const & rhs );

		void		addNumber( int number );
		void		addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );

		long		shortestSpan();
		long		longestSpan();

		class		FullNumber : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class		NotEnoughNumber : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
