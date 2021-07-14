#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int _value)
{
	value  = _value << fractionNumber;
}

Fixed::Fixed(const float _value)
{
	value = roundf(_value * (1 << fractionNumber));
}

Fixed::Fixed( const Fixed & src )
{
	this->operator=(src);
}

Fixed::~Fixed() { }

int		Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed 	&Fixed::operator=( Fixed const &rhs )
{
	if (this == &rhs)
		return (*this);
	else
		this->value = rhs.value;
	return *this;
}

int		Fixed::toInt(void) const
{
	return ((int)(value >> fractionNumber));
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << fractionNumber));
}

bool	Fixed::operator>( Fixed const & f )
{
	if (this->value > f.value)
		return true;
	else
		return false;
}

bool	Fixed::operator<( Fixed const & f )
{
	if (this->value < f.value)
		return true;
	else
		return false;
}

bool	Fixed::operator>=( Fixed const & f )
{
	if (this->value >= f.value)
		return true;
	else
		return false;
}

bool	Fixed::operator<=( Fixed const & f )
{
	if (this->value <= f.value)
		return true;
	else
		return false;
}

bool	Fixed::operator==( Fixed const & f )
{
	if (this->value == f.value)
		return true;
	else
		return false;
}

bool	Fixed::operator!=( Fixed const & f )
{
	if (this->value != f.value)
		return true;
	else
		return false;
}

Fixed &	Fixed::operator+( Fixed const & f )
{
	this->value += f.value;
	return (*this);
}

Fixed &	Fixed::operator-( Fixed const & f )
{
	this->value -= f.value;
	return (*this);
}

Fixed &	Fixed::operator*( Fixed const & f )
{
	this->value = this->value * f.value / (1 << fractionNumber);
	return (*this);
}

Fixed &	Fixed::operator/( Fixed const & f )
{
	this->value = this->value / f.value * (1 << fractionNumber);
	return (*this);
}

Fixed &	Fixed::operator++( void )
{
	value++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed old = *this;
	operator++();
	return old;
}

Fixed & Fixed::operator--( void )
{
	value--;
	return (*this);
}

Fixed	Fixed::operator-- ( int )
{
	Fixed old = *this;
	operator--();
	return old;
}

Fixed const &Fixed::max( Fixed const &f1, Fixed const &f2 )
{
	if (f1.value < f2.value)
		return (f2);
	else
		return (f1);
}

Fixed const &Fixed::min( Fixed const &f1, Fixed const &f2 )
{
	if (f1.value > f2.value)
		return (f2);
	else
		return (f1);
}

Fixed		&Fixed::max( Fixed &f1, Fixed &f2 )
{
	if (f1 < f2)
		return (f2);
	else
		return (f1);
}

Fixed		&Fixed::min( Fixed &f1, Fixed &f2 )
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

std::ostream &operator<<( std::ostream &os, Fixed const & rhs )
{
	std::cout << rhs.toFloat();
	return (os);
}
