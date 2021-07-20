/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:48:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/20 15:41:48 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name ("none")
{
	grade = 1;
}

Bureaucrat::Bureaucrat(std::string const _name, int _grade) : name(_name)
{
	grade = _grade;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	this->operator=(src);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat		&Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->grade = rhs.getGrade();
	}
	return *this;
}

std::ostream	&operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << "<" << i.getName() << ">, bureaucrat grade <" << i.getGrade() << ">." << std::endl;
	return o;
}

std::string	Bureaucrat::getName() const
{
	return (name);
}

int			Bureaucrat::getGrade() const
{
	return (grade);
}

void		Bureaucrat::increaseGrade(void)
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}

void		Bureaucrat::decreaseGrade(void)
{
	if (grade > 1)
		grade--;
	else
		throw GradeTooHighException();
}

int			Bureaucrat::signForm(Form &form)
{
	if (form.getSignGrade() >= grade)
	{
		std::cout << name << " signs " << form.getName() << std::endl;
		return (1);
	}
	else
	{
		std::cout << name << " cannot signs " << form.getName() << " because ";
		throw Form::GradeTooLowException();
		return (0);
	}
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("TOO HIGH GRADE");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("TOO LOW GRADE");
}

