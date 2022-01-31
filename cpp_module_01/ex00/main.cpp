/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:31:59 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 15:27:53 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "================================" << std::endl;
	std::cout << "jockey  is dynamic memory(heap))" << std::endl;
	std::cout << "spitter is static memory(stack))" << std::endl;
	std::cout << "================================" << std::endl;

	Zombie	*jockey = newZombie("jockey");
	jockey->announce();

	randomChump("spitter");

	delete jockey;
	
	return (0);
}
