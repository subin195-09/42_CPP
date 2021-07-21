/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:11:20 by skim              #+#    #+#             */
/*   Updated: 2021/07/21 15:56:09 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("none"), Form("president", 25,5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
: target(_target), Form("president", 25,5) {}

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
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
