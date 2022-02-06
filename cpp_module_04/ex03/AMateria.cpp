/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:24:32 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:55:53 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "none";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
	type = other.getType();
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this == &other)
		return (*this);
	
	type = other.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* no type materia at " << target.getName() << " *";
}

