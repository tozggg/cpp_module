/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/01 23:33:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << "[WrongDog] Default Constructor" << std::endl;
	type = "dog";
}

WrongDog::WrongDog(const WrongDog& other)
{
	std::cout << "[WrongDog] Copy Constructor" << std::endl;
	type = other.getType();
}

WrongDog::~WrongDog()
{
	std::cout << "[WrongDog] Destructor" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog& other)
{
	std::cout << "[WrongDog] Assignment Operator" << std::endl;
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << "\"mung mung\"" << std::endl;
}
