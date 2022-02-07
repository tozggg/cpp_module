/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:31:21 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/07 18:06:09 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "usage: ./convert [string]" << std::endl;
		return (1);
	}

	Convert con(av[1]);
	con.print();

	return (0);
}
