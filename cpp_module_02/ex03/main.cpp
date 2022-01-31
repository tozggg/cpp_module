/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:15:14 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 15:14:58 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {

	Point a(1, 1);
	Point b(9, 1);
	Point c(4, 9);


	Point arr[5] = {Point(8, 8), \
					Point(4, 4), \
					Point(1, 4), \
					Point(1.5, 3.5), \
					Point(3.125, 4.125)};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "(" << arr[i].getX() << " , ";
		std::cout << arr[i].getY() << ")";

		if (bsp(a, b, c, arr[i]))
			std::cout << " is in" << std::endl;
		else
			std::cout << " is out" << std::endl;
	}
	return (0);
}
