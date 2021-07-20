/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:28:45 by skim              #+#    #+#             */
/*   Updated: 2021/07/20 17:03:23 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const _name, int _grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		Bureaucrat	&operator=( Bureaucrat const & rhs );
		std::string	getName() const ;
		int			getGrade() const ;
		void		increaseGrade(void);
		void		decreaseGrade(void);
		void		signForm(Form &form);
		void		executeForm(Form &form);
		class		GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<( std::ostream & o, Bureaucrat const & i );

#endif
