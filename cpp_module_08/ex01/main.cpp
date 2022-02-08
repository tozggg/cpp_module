/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:42:04 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 00:53:05 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Span sp = Span(3);

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Span sp = Span(3);

		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	{
		Span sp = Span(10000);
		for (int i = 1; i <= 10000; i++)
			sp.addNumber(i * 2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;

	{
		std::vector<unsigned int> v;
		for (unsigned int i = 1; i <= 10000; i++)
			v.push_back(i * 3);
		
		Span sp = Span(10000);
		sp.addRange(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
