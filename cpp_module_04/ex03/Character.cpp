/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:45:19 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 13:17:00 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	name = "unknown";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "[" << name << "] is created" << std::endl;
}

Character::Character(std::string str)
{
	name = str;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "[" << name << "] is created" << std::endl;
}

Character::Character(const Character& other)
{
	name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "copy character created" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	std::cout << "[" << name << "] is destroyed" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	std::cout << "character assignation..." << std::endl;
	if (this == &other)
		return (*this);

	name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

std::string const &	Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << "[" << name << "] equipped [" << m->getType();
			std::cout << "] in the inventory[" << i << "]" << std::endl;
			return ;
		}
	}
	std::cout << "! no space in the inventory" << std::endl;
}

void	Character::unequip(int idx)
{
	if (!(0 <= idx && idx <= 3) || !inventory[idx])
	{
		std::cout << "! invalid inventory number" << std::endl;
		return ;
	}
	inventory[idx] = NULL;
	std::cout << "[" << name << "] unequipped inventory[" << idx << "]" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!(0 <= idx && idx <= 3) || !inventory[idx])
	{
		std::cout << "! invalid inventory number" << std::endl;
		return ;
	}
	inventory[idx]->use(target);
}
