/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:15:14 by skim              #+#    #+#             */
/*   Updated: 2021/08/19 20:19:25 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("Bure_A", 10);
	Bureaucrat b("Bure_B", 75);
	Bureaucrat c("Bure_C", 150);

	Form test10("test_10", 10, 5);
	Form test75("test_75", 75, 70);
	Form test150("test_150", 150, 145);
	
	std::cout << test10;
	std::cout << test75;
	std::cout << test150;
	std::cout << std::endl;
	try
	{
		a.signForm(test150);
		a.signForm(test75);
		a.signForm(test10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		b.signForm(test150);
		b.signForm(test75);
		b.signForm(test10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		test75.beSigned(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
