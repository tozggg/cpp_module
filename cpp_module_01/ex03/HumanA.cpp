/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:29:07 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/27 15:37:43 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : name(name), weapon(weapon)
{}

void	HumanA::attack(void)
{
	cout << name;
	cout << "attacks with his " << weapon.getType() << endl;
}
