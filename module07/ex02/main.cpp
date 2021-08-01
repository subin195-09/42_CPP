/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 21:11:32 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 19:24:51 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> arrInt(5);
	Array<int> arrInt2(5);

	for (int i = 0; i < 5; i++)
	{
		std::cout << arrInt[i] << " ";
		arrInt2[i] = i;
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		std::cout << arrInt2[i] << " ";
	std::cout << std::endl;

	try
	{
		arrInt[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	arrInt = arrInt2;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arrInt[i] << " ";
	}
	std::cout << std::endl;


	Array<std::string> arrString(5);
	Array<std::string> arrString2(5);

	std::cout << "string1" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arrString[i] << ", ";
		arrString2[i] = std::to_string(i) + " skim";
	}
	std::cout << std::endl;
	std::cout << "string2" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << arrString2[i] << ", ";
	std::cout << std::endl;

	try
	{
		arrString[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	arrString = arrString2;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arrString[i] << " ";
	}
	std::cout << std::endl;
	system("leaks array");

	return (0);
}
