/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:15:22 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/28 23:41:13 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	frac_bits;

public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(int n);
	Fixed(float f);
	~Fixed();

	Fixed&	operator=(const Fixed& other);

	bool	operator==(const Fixed& other);
	bool	operator!=(const Fixed& other);
	bool	operator>(const Fixed& other);
	bool	operator<(const Fixed& other);
	bool	operator>=(const Fixed& other);
	bool	operator<=(const Fixed& other);

	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
	
	static const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
	static const Fixed&	max(const Fixed& fix1, const Fixed& fix2);
};

std::ostream&	operator<<(std::ostream& ost, const Fixed& fix);

#endif
