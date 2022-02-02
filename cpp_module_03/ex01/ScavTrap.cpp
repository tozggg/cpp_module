/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:30:45 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/02 16:05:28 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "unknown";
	hitpoints = 100;
	energy = 50;
	attack_damage = 20;
	
	std::cout << "[Scavtrap] ";
	std::cout << name << " has created" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
	name = str;
	hitpoints = 100;
	energy = 50;
	attack_damage = 20;

	std::cout << "[Scavtrap] ";
	std::cout << name << " has created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[Scavtrap] ";
	std::cout << name << " has destroyed" << std::endl;
}

void		ScavTrap::attack(std::string const & target)
{
	std::cout << "[ScavTrap] " << name;
	std::cout << " attack " << target;
	std::cout << " , causing " << attack_damage;
	std::cout << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "[Scavtrap] ";
	std::cout << name << " has entered in Gatekeeper mode" << std::endl;
}

