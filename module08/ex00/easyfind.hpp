/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:50:38 by skim              #+#    #+#             */
/*   Updated: 2021/08/08 19:18:23 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class	NotFind : public std::exception
{
	public:
		virtual const char *what() const throw() {
			return ("Not Find!!");
		}
};

template<typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator	it = find(container.begin(), container.end(), n);
	if (it != container.end())
		return it;
	else
		throw NotFind();
}

#endif
