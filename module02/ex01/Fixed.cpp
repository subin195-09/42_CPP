#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int _value)
{
	std::cout << "Int constructor called" << std::endl;
	value  = _value << fractionNumber;
}

Fixed::Fixed(const float _value)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(_value * (1 << fractionNumber));
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed 	&Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	else
		this->value = rhs.value;
	return *this;
}

std::ostream &operator<<( std::ostream &os, Fixed const & rhs )
{
	os << rhs.toFloat();
	return (os);
}

int		Fixed::toInt(void) const
{
	return ((int)(value >> fractionNumber));
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << fractionNumber));
}
