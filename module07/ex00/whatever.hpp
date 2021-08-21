/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:15:49 by skim              #+#    #+#             */
/*   Updated: 2021/08/21 19:33:18 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
