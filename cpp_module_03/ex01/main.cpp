/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:50:17 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 15:46:54 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap clap = ClapTrap("clap");
		
		clap.attack("moniter");
		clap.takeDamage(3);
		clap.beRepaired(5);
	}
	std::cout << "---------------------------------------" << std::endl;
	{
		ScavTrap scav = ScavTrap("scav");
		
		scav.attack("keyboard");
		scav.takeDamage(20);
		scav.beRepaired(10);
		scav.guardGate();
	}
	return (0);
}
