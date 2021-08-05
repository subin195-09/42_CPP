/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:45 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 15:48:22 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	srand((unsigned int)time(NULL));
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

	std::cout << std::endl;
	std::cout << "🌈deep check🌈" << std::endl;
	Dog test1;
	Dog test2;
	std::cout << test1.getBrain() << std::endl;
	std::cout << test2.getBrain() << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << test1.getBrain()->getIdeas(i) << " = ";
		std::cout << test2.getBrain()->getIdeas(i) << std::endl;
	}
	test1 = test2;
	std::cout << test1.getBrain() << std::endl;
	std::cout << test2.getBrain() << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << test1.getBrain()->getIdeas(i) << " = ";
		std::cout << test2.getBrain()->getIdeas(i) << std::endl;
	}
	std::cout << "deep check fin" << std::endl;

	std::cout << "🌈deep check🌈" << std::endl;
	Dog basic;
	Dog tmp = basic;

	std::cout << basic.getBrain() << std::endl;
	std::cout << tmp.getBrain() << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << test1.getBrain()->getIdeas(i) << " = ";
		std::cout << test2.getBrain()->getIdeas(i) << std::endl;
	}
	system("leaks a.out");
}

