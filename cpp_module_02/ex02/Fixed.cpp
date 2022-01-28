/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:40:20 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/28 23:41:57 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frac_bits = 8;

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::Fixed(int n)
{
	value = (n << frac_bits);
}

Fixed::Fixed(float f)
{
	value = (roundf(f * (1 << frac_bits)));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

bool	Fixed::operator==(const Fixed& other)
{
	if (this == &other)
		return (true);
	if (value == other.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other)
{
	if (value != other.value)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& other)
{
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other)
{
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other)
{
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other)
{
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed res = Fixed(this->toFloat() + other.toFloat());
	return (res);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed res = Fixed(this->toFloat() - other.toFloat());
	return (res);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed res = Fixed(this->toFloat() * other.toFloat());
	return (res);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed res = Fixed(this->toFloat() / other.toFloat());
	return (res);
}

Fixed&	Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++value;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--value;
	return (tmp);
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

const Fixed&	Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.toFloat() <= fix2.toFloat())
		return (fix1);
	return (fix2);
}

const Fixed&	Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.toFloat() >= fix2.toFloat())
		return (fix1);
	return (fix2);
}

std::ostream&	operator<<(std::ostream& ost, const Fixed& fix)
{
	ost << fix.toFloat();
	return (ost);
}
