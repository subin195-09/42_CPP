/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:08:52 by skim              #+#    #+#             */
/*   Updated: 2021/07/31 20:14:17 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data *test = new Data;

	test->data1 = "skim :)";
	test->data2 = 42;
	test->data3 = 42.42f;

	std::cout << test->data1 << std::endl;
	std::cout << test->data2 << std::endl;
	std::cout << test->data3 << std::endl;

	uintptr_t serialTest = serialize(test);
	std::cout << std::endl;
	std::cout << *reinterpret_cast<std::string *>(*reinterpret_cast<uintptr_t *>(serialTest)) << std::endl;
	std::cout << std::endl;

	Data *deserialTest = deserialize(serialTest);
	std::cout << deserialTest->data1 << std::endl;
	std::cout << deserialTest->data2 << std::endl;
	std::cout << deserialTest->data3 << std::endl;

	// 왜 없어도 memory leak 이 나지 않을까....
	delete reinterpret_cast<uintptr_t *>(serialTest);
}
