/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:48:05 by skim              #+#    #+#             */
/*   Updated: 2021/07/20 17:12:56 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
	protected:
		std::string	const	name;
		bool				sign;
		int const 			signGrade;
		int const			exeGrade;
	public:
		Form();
		Form( std::string _name, int _signGrade, int _exeGrade );
		Form( Form const & src );
		virtual ~Form();
		Form			&operator=( Form const & rhs );
		std::string		getName(void) const;
		bool			getSign(void) const;
		int				getSignGrade(void) const;
		int				getExeGrade(void) const;
		void			beSigned(Bureaucrat &burea);
		virtual void	execute(Bureaucrat const &executor) = 0;
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

std::ostream	&operator<<( std::ostream & o, Form const & i );

#endif
