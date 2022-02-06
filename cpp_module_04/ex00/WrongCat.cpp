/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:42:23 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "[WrongCat] Default Constructor" << std::endl;
	type = "cat";
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "[WrongCat] Copy Constructor" << std::endl;
	type = other.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "[WrongCat] Assignment Operator" << std::endl;
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "\"ya ong\"" << std::endl;
}
