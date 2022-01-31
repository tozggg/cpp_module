/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:30:45 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 18:43:54 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "unknown";
	hitpoints = S_HP;
	energy = S_EP;
	attack_damage = S_AD;
	
	std::cout << "[ScavTrap] ";
	std::cout << name << " has created" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
	name = str;
	hitpoints = S_HP;
	energy = S_EP;
	attack_damage = S_AD;

	std::cout << "[ScavTrap] ";
	std::cout << name << " has created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] ";
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
	std::cout << "[ScavTrap] ";
	std::cout << name << " has entered in Gatekeeper mode" << std::endl;
}

