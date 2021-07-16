/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:12:40 by skim              #+#    #+#             */
/*   Updated: 2021/07/17 01:35:36 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
		int					hp;
		std::string 		type;
	public:
		Enemy();
		Enemy(int _hp, std::string const &_type);
		Enemy( Enemy const & src );
		virtual ~Enemy();
		Enemy 			&operator=( Enemy const & rhs );
		std::string		getType() const;
		int				getHP() const;
		virtual void	takeDamage(int _damage);
};

#endif
