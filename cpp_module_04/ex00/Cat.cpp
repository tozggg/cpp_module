/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:42:11 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default Constructor" << std::endl;
	type = "cat";
}

Cat::Cat(const Cat& other)
{
	std::cout << "[Cat] Copy Constructor" << std::endl;
	type = other.getType();
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "[Cat] Assignment Operator" << std::endl;
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "\"ya ong\"" << std::endl;
}
