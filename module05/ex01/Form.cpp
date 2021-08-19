/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:05:27 by skim              #+#    #+#             */
/*   Updated: 2021/08/19 16:19:15 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("none"), signGrade(1), exeGrade(1)
{
	sign = false;
}

Form::Form( std::string _name, int _signGrade, int _exeGrade )
: name(_name), signGrade(_signGrade), exeGrade(_exeGrade)
{
	sign = false;
}

Form::Form( const Form & src ) : name(src.getName()), signGrade(src.getSignGrade()), exeGrade(src.getExeGrade())
{
	this->sign = src.getSign();
}

Form::~Form() {}

Form	&Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->sign = rhs.getSign();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "name = " << i.getName() << std::endl;
	o << "sign = " << i.getSign() << std::endl;
	o << "signGrade = " << i.getSignGrade() << std::endl;
	o << "exeGrade = " << i.getExeGrade() << std::endl;
	return o;
}

std::string	const	&Form::getName(void) const
{
	return (name);
}

bool				Form::getSign(void) const
{
	return (sign);
}

int					Form::getSignGrade(void) const
{
	return (signGrade);
}

int					Form::getExeGrade(void) const
{
	return (exeGrade);
}

void		Form::beSigned(Bureaucrat &burea)
{
	if (signGrade >= burea.getGrade())
		sign = true;
	else
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("grade is too high");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("grade is too low");
}
