/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:31:50 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 00:41:03 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant( SuperMutant const & src );
		~SuperMutant();
		SuperMutant	&operator=( SuperMutant const & rhs );
		void		takeDamage(int _damage);
};

#endif
