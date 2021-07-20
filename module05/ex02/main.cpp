/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:15:14 by skim              #+#    #+#             */
/*   Updated: 2021/07/20 17:17:10 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand((unsigned int)time(NULL));
	Bureaucrat a("Bure_A", 5);
	Bureaucrat b("Bure_B", 75);
	Bureaucrat c("Bure_C", 150);

	ShrubberyCreationForm shr("shrubbery");
	RobotomyRequestForm rob("roboto");
	PresidentialPardonForm pre("president");

	std::cout << a;
	std::cout << b;
	std::cout << c;

	std::cout << shr;
	std::cout << rob;
	std::cout << pre;

	std::cout << std::endl;
	try
	{
		a.executeForm(shr);
		a.executeForm(rob);
		a.executeForm(pre);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		b.executeForm(shr);
		b.executeForm(rob);
		b.executeForm(pre);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		c.executeForm(shr);
		c.executeForm(rob);
		c.executeForm(pre);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
