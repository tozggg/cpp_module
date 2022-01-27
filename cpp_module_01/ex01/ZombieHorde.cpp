/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:05:24 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 17:43:28 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	std::stringstream stream;

	for(int i = 0; i < N; i++)
	{
		stream.str("");
		stream << i + 1;
		horde[i].setName(name + stream.str());
	}
	return (horde);
}
