/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:30:45 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 18:42:06 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "unknown";
	hitpoints = F_HP;
	energy = F_EP;
	attack_damage = F_AD;

	std::cout << "[FragTrap] ";
	std::cout << name << " has created" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	hitpoints = F_HP;
	energy = F_EP;
	attack_damage = F_AD;

	std::cout << "[FragTrap] ";
	std::cout << name << " has created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] ";
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
	std::cout << "[FragTrap] ";
	std::cout << name << " request positive highfives" << std::endl;
}

