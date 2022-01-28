/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:15:22 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/28 23:33:15 by taejkim          ###   ########.fr       */
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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& ost, const Fixed& fix);

#endif
