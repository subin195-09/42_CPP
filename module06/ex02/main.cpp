/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:51:47 by skim              #+#    #+#             */
/*   Updated: 2021/08/20 18:11:44 by skim             ###   ########.fr       */
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

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A Type" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B Type" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C Type" << std::endl;
	else
		std::cout << "None Type" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		Base &test = dynamic_cast<A &>(p);
		std::cout << "A Type" << std::endl;
		return ;
		(void)test;
	}
	catch(const std::exception& e) {}

	try
	{
		Base &test = dynamic_cast<B &>(p);
		std::cout << "B Type" << std::endl;
		return ;
		(void)test;
	}
	catch(const std::exception& e) {}

	try
	{
		Base &test = dynamic_cast<C &>(p);
		std::cout << "C Type" << std::endl;
		return ;
		(void)test;
	}
	catch(const std::exception& e) {}

	std::cout << "None Type" << std::endl;
}

int main(void)
{
	srand(time(NULL));

	Base *testBase = new Base;
	Base *testA = new A;
	Base *testB = new B;
	Base *testC = new C;
	Base *test = generate();

	identify(testBase);
	identify(testA);
	identify(testB);
	identify(testC);
	identify(test);
	std::cout << std::endl;

	Base &refBase = *testBase;
	Base &refA = *testA;
	Base &refB = *testB;
	Base &refC = *testC;
	Base &ref = *test;
	identify(refBase);
	identify(refA);
	identify(refB);
	identify(refC);
	identify(ref);

	delete testBase;
	delete testA;
	delete testB;
	delete testC;
	delete test;
}
