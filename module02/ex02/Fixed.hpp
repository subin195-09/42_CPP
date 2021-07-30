#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	fractionNumber = 8;
	public:

		Fixed();
		Fixed( const int _value );
		Fixed( const float _float );
		Fixed( Fixed const & src );
		~Fixed();
		Fixed 	&operator=( Fixed const & rhs );
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void)	const;

		bool	operator>( Fixed const & f );
		bool	operator<( Fixed const & f );
		bool	operator>=( Fixed const & f );
		bool	operator<=( Fixed const & f );
		bool	operator==( Fixed const & f );
		bool	operator!=( Fixed const & f );

		Fixed	operator+( Fixed const & f );
		Fixed	operator-( Fixed const & f );
		Fixed	operator*( Fixed const & f );
		Fixed	operator/( Fixed const & f );

		Fixed &	operator++( void ); // prefix
		Fixed	operator++( int ); // postfix
		Fixed & operator--( void );
		Fixed	operator-- ( int );

		static Fixed	const &max( Fixed const &f1, Fixed const &f2 );
		static Fixed	const &min( Fixed const &f1, Fixed const &f2 );
		static Fixed		&max( Fixed & f1, Fixed & f2 );
		static Fixed		&min( Fixed & f1, Fixed & f2 );
};

std::ostream &	operator<<( std::ostream &os, Fixed const & rhs );

#endif
