/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:40:14 by skim              #+#    #+#             */
/*   Updated: 2021/07/21 16:55:24 by skim             ###   ########.fr       */
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

Form	*Intern::makeForm(std::string form_name, std::string target_form)
{
	std::string formList[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form		*forms[3] = {
		new ShrubberyCreationForm(target_form),
		new RobotomyRequestForm(target_form),
		new PresidentialPardonForm(target_form)
	};
	int i = -1;
	while (++i < 3)
	{
		if (form_name.compare(formList[i]) == 0)
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
		std::cout << "Intern creates " << target_form << std::endl;
		return (forms[i]);
	}
}

const char	*Intern::Unknown::what(void) const throw()
{
	return ("Unknown Form");
}
