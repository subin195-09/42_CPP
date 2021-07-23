/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:55:35 by skim              #+#    #+#             */
/*   Updated: 2021/07/16 23:55:50 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
		std::string	name;
		int			apcost;
		int			damage;
	public:
		AWeapon();
		AWeapon(std::string const &_name, int _apcost, int _damage);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();
		AWeapon &		operator=( AWeapon const & rhs );
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack() const = 0;
};

#endif
