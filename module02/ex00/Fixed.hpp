#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	fractionNumber = 8;
	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();
		Fixed &		operator=( Fixed const & rhs );
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif
