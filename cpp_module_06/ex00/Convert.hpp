/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:33:53 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/07 19:15:47 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
# include <cstdlib>
# include <cctype>
# include <limits>
# include <cerrno>

class Convert
{
private:
	bool		is_invalid;
	double		value;

public:
	Convert();
	Convert(std::string input);
	Convert(const Convert& other);
	~Convert();

	Convert&	operator=(const Convert& other);

	void	printChar(void) const;
	void	printInt(void) const;
	void	printFloat(void) const;
	void	printDouble(void) const;

	void	print(void) const;
};

#endif
