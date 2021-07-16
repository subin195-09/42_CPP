/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 02:50:45 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 02:53:43 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int n) const = 0;
		virtual int push(ISpaceMarine* ism) = 0;
};

#endif
