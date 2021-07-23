/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:05:43 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 00:08:59 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"
# include <iostream>

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist( PowerFist const & src );
		~PowerFist();
		PowerFist	&operator=( PowerFist const & rhs );
		void		attack(void) const;
};

#endif
