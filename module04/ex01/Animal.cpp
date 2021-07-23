#include "Animal.hpp"

Animal::Animal() { type = "none"; }

Animal::Animal(std::string _target) { type = _target; }

Animal::Animal( const Animal & src )
{
	this->operator=(src);
}

Animal::~Animal() {}

Animal			&Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string		Animal::getType(void) const
{
	return (type);
}

void			Animal::makeSound(void) const
{
	std::cout << "animal animal" << std::endl;
}

