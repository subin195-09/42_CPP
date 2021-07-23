/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:45 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 17:52:19 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *Animals[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	for (int i = 0; i < 10; ++i)
		delete Animals[i];

	std::cout << "deep check" << std::endl;
	Dog test1;
	Dog test2;
	test1 = test2;
	std::cout << test1.getBrain() << std::endl;
	std::cout << test2.getBrain() << std::endl;
	std::cout << "deep check fin" << std::endl;

	system("leaks a.out");
}
