/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:53:20 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 16:11:08 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "usage: ./karenFilter [LEVEL]" << std::endl;
		return (1);
	}

	Karen karen;
	karen.filter(av[1]);
	
	return (0);
}
