/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:08:24 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 00:42:40 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size): numbers(0, 0)
{
	numbers.reserve(size);
}

Span::Span(const Span& other): numbers(0, 0)
{
	numbers.reserve(other.numbers.capacity());
	std::copy(other.numbers.begin(), other.numbers.end(), std::back_inserter(numbers));
}

Span&	Span::operator=(const Span& other)
{
	if (numbers.capacity() < other.numbers.capacity())
		throw (NoSpaceException());
	numbers.clear();
	std::copy(other.numbers.begin(), other.numbers.end(), std::back_inserter(numbers));
	
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(unsigned int value)
{
	if (numbers.size() == numbers.capacity())
		throw (NoSpaceException());
	numbers.push_back(value);
}

unsigned int	Span::longestSpan(void)
{
	if (numbers.size() < 2)
		throw (NoSpanException());

	unsigned int max;
	max = *std::max_element(numbers.begin(), numbers.end());
	unsigned int min;
	min = *std::min_element(numbers.begin(), numbers.end());
	
	return (max - min);
}

unsigned int	Span::shortestSpan(void)
{
	if (numbers.size() < 2)
		throw (NoSpanException());

	std::vector<unsigned int> copy(numbers);
	std::sort(copy.begin(), copy.end());
	
	unsigned int diff = UINT_MAX;
	unsigned int tmp;
	for (size_t i = 1; i < copy.size(); i++)
	{
		tmp = copy[i] > copy[i-1] ? copy[i]-copy[i-1] : copy[i-1]-copy[i];
		if (tmp < diff)
			diff = tmp;
	}
	
	return (diff);
}

const char*	Span::NoSpaceException::what(void) const throw()
{
	return ("Exception: no space in span");
}

const char*	Span::NoSpanException::what(void) const throw()
{
	return ("Exception: span has only one number");
}
