/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:36:14 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:59:05 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& other) : AMateria(other.getType())
{
}

Cure::~Cure()
{
}

Cure&	Cure::operator=(const Cure& other)
{
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
