/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:07:46 by skim              #+#    #+#             */
/*   Updated: 2021/07/08 20:11:05 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	Karen	karen;

	karen->complain("DEBUG");
	karen->complain("INFO");
	karen->complain("WARNING");
	karen->complain("ERROR");
}