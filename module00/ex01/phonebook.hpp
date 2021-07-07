/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:50:15 by skim              #+#    #+#             */
/*   Updated: 2021/07/07 15:20:08 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <cstring>
#include <cctype>
#include <iostream>
#include <iomanip>
#include <sstream>

class   Phonebook {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		void	getInfo();
		void	showShortInfo(int i);
		void	showInfo();
};

void	setString(std::string info);
void    searchInfo(Phonebook pb[8], int size);

#endif