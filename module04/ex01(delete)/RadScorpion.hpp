/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:48:15 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 00:49:35 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion( RadScorpion const & src );
		~RadScorpion();
		RadScorpion	&operator=( RadScorpion const & rhs );
};

#endif
