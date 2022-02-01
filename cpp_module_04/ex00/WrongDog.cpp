/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/01 23:33:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << "[WrongDog] Default Constructor" << std::endl;
	type = "dog";
}

WrongDog::~WrongDog()
{
	std::cout << "[WrongDog] Destructor" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "\"mung mung\"" << std::endl;
}
