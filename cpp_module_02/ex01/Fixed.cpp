/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:40:20 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/28 23:33:08 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frac_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	value = (n << frac_bits);
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	value = (roundf(f * (1 << frac_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int		Fixed::toInt(void) const
{
	return (value >> frac_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << frac_bits));
}

std::ostream&	operator<<(std::ostream& ost, const Fixed& fix)
{
	ost << fixed.toFloat();
	return (ost);
}
