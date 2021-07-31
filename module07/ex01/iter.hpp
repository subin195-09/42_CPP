/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:48:03 by skim              #+#    #+#             */
/*   Updated: 2021/07/31 21:07:49 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *address, size_t len, void(* f)(T &array))
{
	for (size_t i = 0; i < len; i++)
		(* f)(address[i]);
	std::cout << std::endl;
}

template<typename T>
void	printAll(T that)
{
	std::cout << that << " ";
}

#endif
