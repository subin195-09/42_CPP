/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:22:41 by skim              #+#    #+#             */
/*   Updated: 2021/07/31 16:12:18 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a(1);
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(1.0f);

	std::cout << "a : " <<  a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "Fixed::max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "Fixed::min(a, b) : " << Fixed::min(a, b) << std::endl;
	std::cout << "------comparison------" << std::endl;
	std::cout << "a, b, c : " << a << ", " << b << " ," << c << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a <= c : " << (a <= c) << std::endl;
	std::cout << "a >= c : " << (a >= c) << std::endl;
	std::cout << "a == c : " << (a == c) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "------arithmetic------" << std::endl;
	std::cout << "a + b : " << a + b << std::endl;
	std::cout << "a - b : " << a - b << std::endl;
	std::cout << "a * b : " << a * b << std::endl;
	std::cout << "a / b : " << a / b << std::endl;

	return (0);
}
