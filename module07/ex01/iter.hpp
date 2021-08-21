/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:48:03 by skim              #+#    #+#             */
/*   Updated: 2021/08/21 17:11:16 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *address, size_t len, void(* f)(T const &array))
{
	for (size_t i = 0; i < len; i++)
		(* f)(address[i]);
}

template<typename T>
void	printAll(T const &that)
{
	std::cout << that << " ";
}

template<typename T>
void	print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

#endif
