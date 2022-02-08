/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:53:23 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/08 21:15:14 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

template <typename T>
void	findPrint(T& container, int value)
{
	try
	{
		typename T::iterator iter;
		iter = easyfind(container, value);
		std::cout << "find value = " << *iter << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	std::vector<int>	v;
	std::deque<int>		d;
	std::list<int>		l;

	for (int i = 0; i < 10; i++)	
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}
	
	findPrint(v, 3);
	findPrint(v, 7);
	findPrint(v, 10);

	findPrint(d, 0);
	findPrint(d, 6);
	findPrint(d, 10);
	
	findPrint(l, 1);
	findPrint(l, 2);
	findPrint(l, 10);

	return (0);
}
