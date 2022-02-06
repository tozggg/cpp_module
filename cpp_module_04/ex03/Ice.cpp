/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:29:35 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 13:01:23 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& other) : AMateria(other.getType())
{
}

Ice::~Ice()
{
}

Ice&	Ice::operator=(const Ice& other)
{
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
