/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:08:43 by skim              #+#    #+#             */
/*   Updated: 2021/07/21 15:57:15 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("none"), Form("roboto", 72,45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
: target(_target), Form("roboto", 72,45) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
: Form("roboto", 72,45)
{
	this->operator=(src);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->sign = rhs.getSign();
	}
	return *this;
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	std::cout << "Drrrrr...." << std::endl;
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized" << std::endl;
	else
		std::cout << executor.getName() << " fail!" << std::endl;
}
