#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int _value)
{
	std::cout << "Int constructor called" << std::endl;
	f_value = _value;
	value = toInt();
}

Fixed::Fixed(const float _value)
{
	std::cout << "Float constructor called" << std::endl;
	f_value = _value;
	value = toInt();
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
	{
		this->value = rhs.value;
		this->f_value = rhs.f_value;
	}
	return *this;
}

std::ostream &operator<<( std::ostream &os, Fixed const & rhs )
{
	std::cout << rhs.toFloat();
	return (os);
}

int		Fixed::toInt(void) const
{
	return (roundf(this->f_value));
}

float	Fixed::toFloat(void) const
{
	float	temp;

	temp = roundf(this->f_value * (1 << fractionNumber));
	return (temp / (1 << fractionNumber));
}
