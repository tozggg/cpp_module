/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:14:18 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 15:01:39 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "unknown";
	hitpoints = 10;
	energy = 10;
	attack_damage = 0;
	
	std::cout << "[Claptrap] ";
	std::cout << name << " has created" << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
	name = str;
	hitpoints = 10;
	energy = 10;
	attack_damage = 0;

	std::cout << "[Claptrap] ";
	std::cout << name << " has created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[Claptrap] ";
	std::cout << name << " has destroyed" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "[ClapTrap] " << name;
	std::cout << " attack " << target;
	std::cout << " , causing " << attack_damage;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[Claptrap] ";
	std::cout << name;
	std::cout << " taken damage! (" << amount << ")" << std::endl;
	std::cout << "[Claptrap] ";
	std::cout << name << "'s HP: " << hitpoints;
	hitpoints -= amount;
	if (hitpoints < 0)
		hitpoints = 0;
	std::cout << " -> " << hitpoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[Claptrap] ";
	std::cout << name;
	std::cout << " be repaired.. (" << amount << ")" << std::endl;
	std::cout << "[Claptrap] ";
	std::cout << name << "'s HP: " << hitpoints;
	hitpoints += amount;
	std::cout << " -> " << hitpoints << std::endl;
}
