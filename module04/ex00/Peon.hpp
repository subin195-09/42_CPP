/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:58:21 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 18:13:49 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include <iostream>

class Peon : public Victim
{
	private:
		Peon();
	public:
		Peon(std::string _name);
		Peon( Peon const & src );
		~Peon();
		Peon &		operator=( Peon const & rhs );
		void			getPolymorphed(void) const;
};

#endif
