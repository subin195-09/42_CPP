/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 03:24:59 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 16:25:33 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ft_replace(std::string line, std::string s1, std::string s2)
{
	int			pos = 0;

	while (line.find(s1, pos) != std::string::npos)
	{
		pos = line.find(s1, pos);
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
	return (line);
}

int			main(void)
{
	std::string		filename = "test";
	std::ifstream	fin(filename);
	if (fin.fail())
	{
		std::cout << "fail : file open" << std::endl;
		return (1);
	}
	std::ofstream	fout(filename + ".replace");
	if (fout.fail())
	{
		std::cout << "fail : fail out" << std::endl;
		return (1);
	}
	std::string		line;
	std::string		s1 = "replace";
	std::string		s2 = ":)";
	
	while (!fin.eof())
	{
		getline(fin, line);
		line = ft_replace(line, s1, s2);
		fout << line;
		if (!fin.eof())
			fout << std::endl;
	}
	
	fin.close();
	fout.close();
}
