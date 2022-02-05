/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:24:32 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/05 12:59:49 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* no type materia at " << target.getName() << " *";
}

