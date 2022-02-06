/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:23:24 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:51:38 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Default Constructor" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "[Animal] Copy Constructor" << std::endl;
	type = other.getType();
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor" << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "[Animal] Assignment Operator" << std::endl;
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (type);
}
