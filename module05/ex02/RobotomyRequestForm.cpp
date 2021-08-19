/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:08:43 by skim              #+#    #+#             */
/*   Updated: 2021/08/19 16:44:14 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("roboto", 72,45)
{
	target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
: Form("roboto", 72,45), target(_target) {}

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

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (sign == false)
		throw Form::UnsignedForm();
	else if (executor.getGrade() > this->exeGrade)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "Drrrrr...." << std::endl;
		if (rand() % 2)
			std::cout << executor.getName() << " has been robotomized" << std::endl;
		else
			std::cout << executor.getName() << " fail!" << std::endl;
	}
}
