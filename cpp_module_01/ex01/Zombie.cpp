/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:34:04 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 17:25:32 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "unknown";
}

Zombie::Zombie(string str)
{
	name = str;
}

Zombie::~Zombie()
{
	cout << "<" << name << "> is died" << endl;
}

void	Zombie::announce()
{
	cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::setName(string str)
{
	name = str;
}
