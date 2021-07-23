/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:03:25 by skim              #+#    #+#             */
/*   Updated: 2021/07/23 14:09:14 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Converter.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Error : args" << std::endl;
		return (1);
	}
	Converter conv(av[1]);
	try
	{
		conv.checkPossible();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}

	try
	{
		conv.toChar();
	}
	catch(std::string & s)
	{
		std::cerr << s << '\n';
	}
	try
	{
		conv.toInt();
	}
	catch(std::string & s)
	{
		std::cerr << s << '\n';
	}
	try
	{
		conv.toFloat();
	}
	catch(std::string & s)
	{
		std::cerr << s << '\n';
	}
	try
	{
		conv.toDouble();
	}
	catch(std::string & s)
	{
		std::cerr << s << '\n';
	}
}
