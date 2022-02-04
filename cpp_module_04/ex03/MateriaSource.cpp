/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:18:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/04 20:30:06 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		storage[i] = NULL;
	std::cout << "source is created" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (storage[i])
			delete storage[i];
	}
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] == NULL)
		{
			storage[i] = m;
			std::cout << "leanMateria [" << m->getType();
			std::cout << "] in the storage[" << i << "]" << std::endl;
			return ;
		}
	}
	std::cout << "! no space in the storage" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] && (storage[i]->getType() == type))
			return (storage[i]->clone());
	}
	std::cout << "! can't find " << type;
	std::cout << "-type materia in the storage" << std::endl;
	return (NULL);
}
