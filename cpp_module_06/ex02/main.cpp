/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:26:26 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 11:44:40 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base* tmp;
	
	std::srand(std::time(NULL));
	for (int i = 0; i < 20; i++)
	{
		tmp = generate();
		
		std::cout << "identify pointer : ";
		identify(tmp);
		std::cout << "identify reference : ";
		identify(*tmp);
		std::cout << "------------------------" << std::endl;

		delete tmp;
	}

	return (0);
}
