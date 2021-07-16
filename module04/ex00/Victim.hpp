/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:42:05 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 18:15:58 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:
		std::string	name;
		Victim();
	public:
		Victim(std::string _name);
		Victim( Victim const & src );
		~Victim();
		Victim &		operator=( Victim const & rhs );
		std::string		getName(void) const;
		void			setName(std::string _name);
		virtual void	getPolymorphed(void) const;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif
