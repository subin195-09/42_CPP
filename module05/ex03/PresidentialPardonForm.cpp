/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:11:20 by skim              #+#    #+#             */
/*   Updated: 2021/07/21 16:23:59 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("president", 25,5)
{
	target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
: Form("president", 25,5), target(_target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
: Form("president", 25,5)
{
	this->operator=(src);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->sign = rhs.getSign();
	}
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (sign == false)
		throw Form::UnsignedForm();
	else if (executor.getGrade() > this->exeGrade)
		throw Form::GradeTooLowException();
	else
		std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
