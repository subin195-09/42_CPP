#include "Orthodox.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Orthodox::Orthodox()
{
}

Orthodox::Orthodox( const Orthodox & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Orthodox::~Orthodox()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Orthodox &				Orthodox::operator=( Orthodox const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Orthodox const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */