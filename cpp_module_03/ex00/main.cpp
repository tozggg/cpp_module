/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:50:17 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 15:34:47 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap = ClapTrap("clap");

	clap.attack("moniter");
	clap.takeDamage(3);
	clap.beRepaired(5);

	return (0);
}
