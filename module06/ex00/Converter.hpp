/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:16:12 by skim              #+#    #+#             */
/*   Updated: 2021/08/20 16:45:10 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
class Converter
{
	private:
		char const	*target;
		float		targetFloat;
		Converter();
	public:
		Converter(char *_target);
		Converter( Converter const & src );
		~Converter();
		Converter &		operator=( Converter const & rhs );

		void			checkPossible(void);
		bool			checkChar(void);
		bool			checkInfNan(void);

		void			toChar(void);
		void			toInt(void);
		void			toFloat(void);
		void			toDouble(void);

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
