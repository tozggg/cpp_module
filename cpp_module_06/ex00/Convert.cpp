/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:03:38 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 11:26:12 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): is_invalid(false), value(0.0) {};

Convert::Convert(std::string input): is_invalid(false), value(0.0)
{
	if (input.length() == 1 && !std::isdigit(input[0]))
	{	
		value = static_cast<double>(input[0]);
		return ;
	}

	errno = 0;
	char	*endptr = NULL;
	
	value = std::strtod(input.c_str(), &endptr);
	if (errno == ERANGE)
		is_invalid = true;
	if (!std::isdigit(input[0]) && !(input[0] == '+' || input[0] == '-') && value == 0)
		is_invalid = true;
	if (!(*endptr == 0 || std::string(endptr) == "f"))
		is_invalid = true;
}

Convert::Convert(const Convert& other):is_invalid(other.is_invalid), value(other.value) {}

Convert::~Convert() {}

Convert&	Convert::operator=(const Convert& other)
{
	is_invalid = other.is_invalid;
	value = other.value;
	return (*this);
}

void	Convert::printChar(void) const
{
	std::cout << "char: ";

	if (std::isnan(value) || std::isinf(value) || \
		value > std::numeric_limits<char>::max() || \
		value < std::numeric_limits<char>::min())
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(value);
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void	Convert::printInt(void) const
{
	std::cout << "int: ";

	if (std::isnan(value) || std::isinf(value) || \
		value > std::numeric_limits<int>::max() || \
		value < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(value);
		std::cout << i << std::endl;
	}
}

void	Convert::printFloat(void) const
{
	std::cout << "float: ";

	if (!(std::isnan(value) || std::isinf(value)) && \
		(value > std::numeric_limits<float>::max() || \
		value < std::numeric_limits<float>::max() * -1))
		std::cout << "impossible" << std::endl;
	else
	{
		float f = static_cast<float>(value);
		if (f == static_cast<int>(f))
			std::cout << f << ".0f" << std::endl;
		else
		{
			std::cout << std::setprecision(std::numeric_limits<float>::digits10);
			std::cout << f << "f" << std::endl;
		}
	}
}
void	Convert::printDouble(void) const
{
	std::cout << "double: ";

	if (value == static_cast<int>(value))
		std::cout << value << ".0" << std::endl;
	else
	{
		std::cout << std::setprecision(std::numeric_limits<double>::digits10);
		std::cout << value << std::endl;
	}
}

void	Convert::print(void) const
{
	if (is_invalid)
	{
		std::cout << "invalid input" << std::endl;
		return ;
	}
	printChar();
	printInt();
	printFloat();
	printDouble();
}
