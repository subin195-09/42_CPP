/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:57:51 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 21:25:04 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Phonebook::getInfo()
{
	std::cout << "firstName : ";
	getline(std::cin, firstName);
	if (std::cin.eof())
		exit(1);
	std::cout << "lastName : ";
	getline(std::cin, lastName);
	if (std::cin.eof())
		exit(1);
	std::cout << "nickName : ";
	getline(std::cin, nickName);
	if (std::cin.eof())
		exit(1);
	std::cout << "phoneNumber : ";
	getline(std::cin, phoneNumber);
	if (std::cin.eof())
		exit(1);
	std::cout << "darkestSecret : ";
	getline(std::cin, darkestSecret);
	if (std::cin.eof())
		exit(1);
}

void    Phonebook::showInfo()
{
	std::cout << "firstName : " + firstName << std::endl;
	std::cout << "lastName : " + lastName << std::endl;
	std::cout << "nickName : " + nickName << std::endl;
	std::cout << "phoneNumber : " + phoneNumber << std::endl;
	std::cout << "darkestSecret : " + darkestSecret << std::endl;
}

void	Phonebook::showShortInfo(int i)
{
	std::cout << "|" << std::setw(10) << std::right << i + 1;
	setString(firstName);
	setString(lastName);
	setString(nickName);
	std::cout << "|" << std::endl;
}