/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:32:03 by skim              #+#    #+#             */
/*   Updated: 2021/07/09 16:59:47 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KAREN_HPP
# define KAREN_HPP

#include <iostream>

class	Karen{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
};

int		return_index(std::string level);

#endif