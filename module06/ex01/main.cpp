/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:08:52 by skim              #+#    #+#             */
/*   Updated: 2021/08/20 17:53:53 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data *test = new Data;

	test->data1 = "skim :)";
	test->data2 = 42;
	test->data3 = 42.42f;

	std::cout << test << std::endl;
	std::cout << "data1 : " << test->data1 << std::endl;
	std::cout << "data2 : " << test->data2 << std::endl;
	std::cout << "data3 : " << test->data3 << std::endl;
	std::cout << std::endl;

	uintptr_t serialTest = serialize(test);
	std::cout << serialTest << std::endl;
	std::cout << "serialTest : " << reinterpret_cast<Data *>(serialTest) << std::endl;
	std::cout << std::endl;

	Data *deserialTest = deserialize(serialTest);
	std::cout << deserialTest<< std::endl;
	std::cout << "deserial data1 : " << deserialTest->data1 << std::endl;
	std::cout << "deserial data2 : " << deserialTest->data2 << std::endl;
	std::cout << "deserial data3 : " << deserialTest->data3 << std::endl;
}
