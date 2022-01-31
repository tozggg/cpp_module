/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:50:17 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 18:16:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dia = DiamondTrap("dia");

	std::cout << std::endl;
	
	dia.whoAmI();
	std::cout << "hit points:\t" << dia.getHp() << std::endl;
	std::cout << "energe points:\t" << dia.getEp() << std::endl;
	std::cout << "attack damage:\t" << dia.getAd() << std::endl;
	
	std::cout << std::endl;

	dia.guardGate();
	dia.highFivesGuys();
	dia.attack("computer");
	
	std::cout << std::endl;

	return (0);
}
