/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:07:46 by skim              #+#    #+#             */
/*   Updated: 2021/07/09 16:41:07 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	Karen	karen;

	std::cout << "complain(DEBUG)" << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "complain(INFO)" << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "complain(WARNING)" << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "complain(ERROR)" << std::endl;
	karen.complain("ERROR");
	std::cout << std::endl;

	std::cout << "complain(42)" << std::endl;
	karen.complain("42");
}