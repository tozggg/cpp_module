/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:53:00 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/08 21:08:48 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>

class NotFindException: public std::exception
{
	const char* what(void) const throw()
	{
		return ("Exception: not find in container");
	}
};

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	typename T::iterator find;
	find = std::find(container.begin(), container.end(), value);

	if (find == container.end())
		throw (NotFindException());

	return (find);
}

#endif
