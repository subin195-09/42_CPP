#ifndef ORTHODOX_HPP
# define ORTHODOX_HPP

# include <iostream>
# include <string>

class Orthodox
{

	public:

		Orthodox();
		Orthodox( Orthodox const & src );
		~Orthodox();

		Orthodox &		operator=( Orthodox const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Orthodox const & i );

#endif /* ******************************************************** ORTHODOX_H */