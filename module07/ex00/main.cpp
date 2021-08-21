/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:15:09 by skim              #+#    #+#             */
/*   Updated: 2021/08/21 19:57:04 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome {
	private:
		int _n;
	public:
		Awesome(int n = 1) : _n(n) {}
		Awesome(const Awesome &rhs)
		{ _n = rhs._n; }
		int getN() const
		{ return _n; }

		bool operator==( Awesome const & rhs ) const
		{ return (this->_n == rhs._n); }

		bool operator!=( Awesome const & rhs ) const
		{ return (this->_n != rhs._n); }

		bool operator>( Awesome const & rhs ) const
		{ return (this->_n > rhs._n); }

		bool operator<( Awesome const & rhs ) const
		{ return (this->_n < rhs._n); }

		bool operator>=( Awesome const & rhs ) const
		{ return (this->_n >= rhs._n); }

		bool operator<=( Awesome const & rhs ) const
		{ return (this->_n <= rhs._n); }
};

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	std::cout << "add test case" << std::endl;
	Awesome test1( 1 );
	Awesome test2( 2 );

	::swap(test1, test2);
	std::cout << "test1 = " << test1.getN() << ", test2 = " << test2.getN() << std::endl;
	std::cout << "min( test1, test2 ) = " << ::min( test1, test2 ).getN() << std::endl;
	std::cout << "max ( test1, test2 ) = " << ::max( test1, test2 ).getN() << std::endl;

	return 0;
}
