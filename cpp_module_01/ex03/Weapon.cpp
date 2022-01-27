/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:06:24 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/27 15:00:07 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(string type)
{
	this->type = type;
}

const string	&Weapon::getType(void)
{
	return (type);
}

void			Weapon::setType(string type)
{
	this->type = type;
}
