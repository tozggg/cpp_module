/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:27:02 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 03:23:30 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		point_position(Point p, Point start, Point end)
{
	Fixed	pos;

	pos = ((start.getX() - p.getX()) * (end.getY() - p.getY())) \
			- ((start.getY() - p.getY()) * (end.getX() - p.getX()));
	std::cout << "pos;;;;" << pos << std::endl;
	if (pos > 0)
		return (LEFT);
	else if (pos < 0)
		return (RIGHT);
	else
		return (INNER);
}

bool	bsp(Point a, Point b, Point c, Point point)
{
	int	pos_ab;
	int	pos_bc;
	int	pos_ca;

	std::cout << "a= x;" << a.getX() << " y;" << a.getY() << std::endl;
	std::cout << "b= x;" << b.getX() << " y;" << b.getY() << std::endl;
	std::cout << "c= x;" << c.getX() << " y;" << c.getY() << std::endl;
	std::cout << "p= x;" << point.getX() << " y;" << point.getY() << std::endl;



	pos_ab = point_position(point, a, b);
	pos_bc = point_position(point, b, c);
	pos_ca = point_position(point, c, a);
	
	if (pos_ab == LEFT && pos_bc == LEFT && pos_ca == LEFT)
		return (true);
	if (pos_ab == RIGHT && pos_bc == RIGHT && pos_ca == RIGHT)
		return (true);
	return (false);
}
