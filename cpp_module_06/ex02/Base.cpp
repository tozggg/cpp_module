/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:43:07 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/07 21:54:00 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base*	generate(void)
{
	int rd = rand();

	if (rd % 3 == 0)
	{
		std::cout << "make A" << std::endl;
		return (new A());
	}
	if (rd % 3 == 1)
	{
		std::cout << "make B" << std::endl;
		return (new B());
	}
	if (rd % 3 == 2)
	{
		std::cout << "make C" << std::endl;
		return (new C());
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	Base ref;

	try
	{
		ref = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(...) {}
	
	try
	{
		ref = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(...) {}
	
	try
	{
		ref = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(...) {}
}
