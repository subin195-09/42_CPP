/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 21:11:32 by skim              #+#    #+#             */
/*   Updated: 2021/08/21 18:15:13 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> empty;
	std::cout << "empty.size() = " << empty.size() << std::endl;
	std::cout << std::endl;

	int *testArr = new int[5];
	for (int i = 0; i < 5; i++)
	std::cout << testArr[i] << " ";
	std::cout << std::endl;
	delete[] testArr;

	Array<int> arrInt(5);
	Array<int> arrInt2(5);

	std::cout << arrInt.size() << std::endl;
	std::cout << arrInt2.size() << std::endl;
	for (int i = 0; i < 5; i++)
		arrInt2[i] = i;

	try
	{
		arrInt[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "arrInt : " << arrInt[i] << " ";
		std::cout << "arrInt2 : " << arrInt2[i] << " ";
		std::cout << std::endl;
	}

	arrInt = arrInt2;
	for (int i = 0; i < 5; i++)
		std::cout << arrInt[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;


	Array<std::string> arrString(5);
	Array<std::string> arrString2(5);
	std::cout << arrString.size() << std::endl;
	std::cout << arrString2.size() << std::endl;

	try
	{
		arrString[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < 5; i++)
		arrString2[i] = std::to_string(i) + "_skim";

	for (int i = 0; i < 5; i++)
	{
		std::cout << "arrString : " << arrString[i] << " ";
		std::cout << "arrString2 : " << arrString2[i] << " ";
		std::cout << std::endl;
	}

	arrString = arrString2;
	for (int i = 0; i < 5; i++)
		std::cout << arrString[i] << " ";
	std::cout << std::endl;
	system("leaks array");

	return (0);
}
