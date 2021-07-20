/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:09:22 by skim              #+#    #+#             */
/*   Updated: 2021/07/20 16:21:43 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string _name);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=( RobotomyRequestForm const & rhs );
		void	execute(Bureaucrat const &executor);
};

#endif
