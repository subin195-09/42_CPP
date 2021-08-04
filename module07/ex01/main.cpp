/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:47:29 by skim              #+#    #+#             */
/*   Updated: 2021/08/02 15:59:06 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	int arrInt[10] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	iter(arrInt, 10, printAll);

	std::string arrString[10] = {
		"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"
	};
	iter(arrString, 10, printAll);

	float arrFloat[10] = {
		0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f
	};
	iter(arrFloat, 10, printAll);

	return (0);
}
