/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:55:59 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 23:59:18 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle : public AWeapon
{

	public:
		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle();
		PlasmaRifle	&operator=( PlasmaRifle const & rhs );
		void		attack(void) const;
};

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );

#endif /* ***************************************************** PLASMARIFLE_H */
