#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & src ) : AMateria("ice")
{
	this->operator=(src);
}

Ice::~Ice()
{
}

Ice			&Ice::operator=( Ice const & rhs )
{
	if (this != &rhs)
	{
		type = rhs.getType();
		xp = rhs.getXP();
	}
	return *this;
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter& target)
{
	this->xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
