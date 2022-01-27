/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:31:59 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 17:02:38 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	cout << "================================" << endl;
	cout << "jockey  is dynamic memory(heap))" << endl;
	cout << "spitter is static memory(stack))" << endl;
	cout << "================================" << endl;

	Zombie	*jockey = newZombie("jockey");
	jockey->announce();

	randomChump("spitter");

	delete jockey;
	
	return (0);
}
