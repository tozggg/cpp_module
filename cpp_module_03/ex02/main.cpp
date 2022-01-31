/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:50:17 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 16:19:13 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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
		FragTrap frag = FragTrap("frag");
		
		frag.attack("mouse");
		frag.takeDamage(15);
		frag.beRepaired(9);
		frag.highFivesGuys();
	}
	return (0);
}
