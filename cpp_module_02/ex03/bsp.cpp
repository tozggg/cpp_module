/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:27:02 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 15:12:40 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		point_position(Point p, Point start, Point end)
{
	Fixed	pos;

	pos = ((start.getX() - p.getX()) * (end.getY() - p.getY())) \
			- ((start.getY() - p.getY()) * (end.getX() - p.getX()));
	
	if (pos > 0)
		return (LEFT);
	else if (pos < 0)
		return (RIGHT);
	else
		return (INNER);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int	pos_ab;
	int	pos_bc;
	int	pos_ca;

	pos_ab = point_position(point, a, b);
	pos_bc = point_position(point, b, c);
	pos_ca = point_position(point, c, a);
	
	if (pos_ab == LEFT && pos_bc == LEFT && pos_ca == LEFT)
		return (true);
	if (pos_ab == RIGHT && pos_bc == RIGHT && pos_ca == RIGHT)
		return (true);
	return (false);
}
