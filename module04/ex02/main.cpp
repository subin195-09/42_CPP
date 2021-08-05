/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:24:45 by skim              #+#    #+#             */
/*   Updated: 2021/08/05 16:13:46 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal test;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType()<< std::endl;
	std::cout << i->getType()<< std::endl;

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
}
