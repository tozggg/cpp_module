/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:30:45 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/02 16:05:44 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "unknown";
	hitpoints = 100;
	energy = 100;
	attack_damage = 30;

	std::cout << "[Fragtrap] ";
	std::cout << name << " has created" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	hitpoints = 100;
	energy = 100;
	attack_damage = 30;

	std::cout << "[Fragtrap] ";
	std::cout << name << " has created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[Fragtrap] ";
	std::cout << name << " has destroyed" << std::endl;
}

void		FragTrap::attack(std::string const & target)
{
	std::cout << "[FragTrap] " << name;
	std::cout << " attack " << target;
	std::cout << " , causing " << attack_damage;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[Fragtrap] ";
	std::cout << name << " request positive highfives" << std::endl;
}

