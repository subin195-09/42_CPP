#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>

class RadScorpion
{

	public:

		RadScorpion();
		RadScorpion( RadScorpion const & src );
		~RadScorpion();

		RadScorpion &		operator=( RadScorpion const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, RadScorpion const & i );

#endif /* ***************************************************** RADSCORPION_H */