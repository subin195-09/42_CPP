/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:51:47 by skim              #+#    #+#             */
/*   Updated: 2021/07/30 19:42:46 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	i = rand() % 3;

	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identifyPointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A Type" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B Type" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C Type" << std::endl;
	else
		std::cout << "None Type" << std::endl;
}

void	identifyReference(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A Type" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B Type" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C Type" << std::endl;
	else
		std::cout << "None Type" << std::endl;
}

int main(void)
{
	srand(time(NULL));

	Base *testA = new A;
	Base *testB = new B;
	Base *testC = new C;
	Base *test = generate();

	identifyPointer(testA);
	identifyPointer(testB);
	identifyPointer(testC);
	identifyPointer(test);
	std::cout << std::endl;

	identifyReference(*testA);
	identifyReference(*testB);
	identifyReference(*testC);
	identifyReference(*test);

	delete testA;
	delete testB;
	delete testC;
	delete test;
}
