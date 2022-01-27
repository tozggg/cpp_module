/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:27:31 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 17:44:26 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(8, "screamer");
	
	for(int i = 0; i < 8; i++)
		horde[i].announce();

	delete[] horde;

	return (0);
}
