/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:16:12 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 00:36:29 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
class Converter
{
	private:
		std::string			target;
		float				targetFloat;
	public:
		Converter();
		Converter( Converter const & src );
		~Converter();
		Converter &		operator=( Converter const & rhs );
		void			checkPossible(std::string &target);
		bool			checkInfNan(void);
		bool			checkChar(std::string target);
		void			toChar(void);
		void			toInt(void);
		void			toFloat(void);
		void			toDouble(void);
};

#endif
