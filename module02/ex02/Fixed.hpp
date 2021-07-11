#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		float				f_value;
		static const int	fractionNumber = 8;
	public:

		Fixed();
		Fixed( const int _value );
		Fixed( const float _float );
		Fixed( Fixed const & src );
		~Fixed();
		Fixed &			operator=( Fixed const & rhs );
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void)	const;
};

std::ostream &	operator<<( std::ostream &os, Fixed const & rhs );
#endif
