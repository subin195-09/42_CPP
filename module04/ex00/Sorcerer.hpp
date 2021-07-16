/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:22:36 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 17:56:49 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>

class Sorcerer
{
	private:
		std::string	name;
		std::string	title;
		Sorcerer();
	public:
		Sorcerer(std::string _name, std::string _title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();
		Sorcerer &		operator=( Sorcerer const & rhs );
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			setName(std::string _name);
		void			setTitle(std::string _title);
		void 			polymorph(Victim const &target) const;
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif
