/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:40:14 by skim              #+#    #+#             */
/*   Updated: 2021/08/19 17:25:07 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	this->operator=(src);
}

Intern::~Intern()
{
}

Intern	&Intern::operator=( Intern const & rhs )
{
	return *this;
	(void)rhs;
}

Form	*Intern::makeForm(std::string form_type, std::string form_name)
{
	std::string formList[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form		*forms[3] = {
		new ShrubberyCreationForm(form_name),
		new RobotomyRequestForm(form_name),
		new PresidentialPardonForm(form_name)
	};

	int i = -1;
	while (++i < 3)
	{
		if (form_type.compare(formList[i]) == 0)
			break ;
	}
	for (int j = 0; j < 3; j++)
	{
		if (i != j)
			delete forms[j];
	}
	
	if (i == 3)
		throw Unknown();
	else
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return (forms[i]);
	}
}

const char	*Intern::Unknown::what(void) const throw()
{
	return ("Unknown Form");
}
