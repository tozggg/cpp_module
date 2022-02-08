/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:41:39 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 00:25:22 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <cstdlib>
# include <vector>
# include <algorithm>
# include <exception>
# include <climits>

class Span
{
private:
	std::vector<unsigned int> numbers;

public:
	Span(unsigned int size);
	Span(const Span& other);
	~Span();

	Span&	operator=(const Span& other);

	void	addNumber(unsigned int value);
	unsigned int	longestSpan(void);
	unsigned int	shortestSpan(void);

	template <typename T>
	void	addRange(T begin, T end)
	{
		if (numbers.capacity() - numbers.size() < \
		static_cast<size_t>(std::distance(begin, end)))
			throw (NoSpaceException());
		for (T iter = begin; iter != end; iter++)
			numbers.push_back(*iter);
	}

	class NoSpaceException: public std::exception
	{
		const char* what(void) const throw();
	};
	class NoSpanException: public std::exception
	{
		const char* what(void) const throw();
	};
};

#endif
