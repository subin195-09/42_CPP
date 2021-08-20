/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:19:14 by skim              #+#    #+#             */
/*   Updated: 2021/08/20 17:19:15 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

size_t		ft_strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

Converter::Converter() {}

Converter::Converter(char *_target) : target(_target) {}

Converter::Converter( const Converter & src )
{
	this->operator=(src);
}

Converter::~Converter() {}

Converter	&Converter::operator=( Converter const & rhs )
{
	if ( this != &rhs )
	{
		this->targetFloat = rhs.targetFloat;
	}
	return *this;
}

bool		Converter::checkChar(void)
{
	if (ft_strlen(target) == 3 \
			&& target[0] == '\'' \
			&& target[2] == '\'')
		return (true);
	else
		return (false);
}

void		Converter::checkPossible(void)
{
	try
	{
		if (checkChar())
		{
			targetFloat = static_cast<float>(target[1]);
			return ;
		}
		targetFloat = std::atof(target);
	}
	catch(const std::exception& e)
	{
		throw Converter::ImpossibleException();
	}
}

bool		Converter::checkInfNan()
{
	if (targetFloat == std::numeric_limits<float>::infinity() || \
		targetFloat == -std::numeric_limits<float>::infinity() || \
		isnan(targetFloat))
		return (true);
	else
		return (false);
}

void		Converter::toChar()
{
	std::cout << "char: ";

	if (checkInfNan())
	{
		std::cout << "impossible" << std::endl;
		return ;
	}

	int	targetChar = static_cast<char>(targetFloat);
	if (!(32 < targetChar  && targetChar < 127))
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	else
		std::cout << "\'" << static_cast<char>(targetChar) << "\'" << std::endl;
}

void		Converter::toInt()
{
	std::cout << "int: ";
	int	targetInt = static_cast<int>(targetFloat);
	if (checkInfNan())
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << targetInt << std::endl;
}

void		Converter::toFloat()
{
	std::cout << "float: ";
	if (targetFloat == std::numeric_limits<float>::infinity())
	{
		std::cout << "inff" << std::endl;
		return ;
	}
	else if (targetFloat == -std::numeric_limits<float>::infinity())
	{
		std::cout << "-inff" << std::endl;
		return ;
	}
	else if (isnan(targetFloat))
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
	std::cout << targetFloat;
	if (targetFloat - static_cast<int>(targetFloat) == 0)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

void		Converter::toDouble()
{
	std::cout << "double: ";
	if (targetFloat == std::numeric_limits<float>::infinity())
	{
		std::cout << "inf" << std::endl;
		return ;
	}
	else if (targetFloat == -std::numeric_limits<float>::infinity())
	{
		std::cout << "-inf" << std::endl;
		return ;
	}
	else if (isnan(targetFloat))
	{
		std::cout << "nan" << std::endl;
		return ;
	}
	double	targetDouble = static_cast<double>(targetFloat);
	std::cout << targetDouble;
	if (targetDouble - static_cast<int>(targetDouble) == 0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

const char	*Converter::ImpossibleException::what(void) const throw()
{
	return ("Error : cannot convert🤔");
}
