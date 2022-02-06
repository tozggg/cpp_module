/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:42:16 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default Constructor" << std::endl;
	type = "dog";
}

Dog::Dog(const Dog& other)
{
	std::cout << "[Dog] Copy Constructor" << std::endl;
	type = other.getType();
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "[Dog] Assignment Operator" << std::endl;
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "\"mung mung\"" << std::endl;
}
