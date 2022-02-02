/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:15:22 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/02 12:46:54 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int					value;
	static const int	frac_bits;

public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();

	Fixed&	operator=(const Fixed& other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
