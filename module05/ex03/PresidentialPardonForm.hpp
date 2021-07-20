#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( std::string _name );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=( PresidentialPardonForm const & rhs );
		void	execute(Bureaucrat const &executor);
};

#endif
