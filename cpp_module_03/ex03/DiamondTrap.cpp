/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:28:00 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 18:41:53 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::name = "unknown_clap_name";
	name = "unknown";
	hitpoints = F_HP;
	energy = S_EP;
	attack_damage = F_AD;

	std::cout << "[DiamondTrap] ";
	std::cout << name << " has created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str)
{
	ClapTrap::name = str + "_clap_name";
	name = str;
	hitpoints = F_HP;
	energy = S_EP;
	attack_damage = F_AD;

	std::cout << "[DiamondTrap] ";
	std::cout << name << " has created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] ";
	std::cout << name << " has destroyed" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "[DiamondTrap] ";
	std::cout << "name: " << name;
	std::cout << " / clapTrap-name: " << ClapTrap::name << std::endl;
}

int		DiamondTrap::getHp(void) const
{
	return (hitpoints);
}

int		DiamondTrap::getEp(void) const
{
	return (energy);
}

int		DiamondTrap::getAd(void) const
{
	return (attack_damage);
}
