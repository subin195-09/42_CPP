/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:47:29 by skim              #+#    #+#             */
/*   Updated: 2021/08/21 19:05:01 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
	o << rhs.get();
	return o;
}

int		main(void)
{
	int arrInt[10] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	iter(arrInt, 10, printAll);
	std::cout << std::endl;

	std::string arrString[10] = {
		"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"
	};
	iter(arrString, 10, printAll);
	std::cout << std::endl;

	float arrFloat[10] = {
		0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f
	};
	iter(arrFloat, 10, printAll);
	std::cout << std::endl;

	std::cout << std::endl;
	int tab[5] = {
		0, 1, 2, 3, 4
	};
	Awesome tab2[5];
	iter(tab, 5, print );
	iter( tab2, 5, print );

	return (0);
}
