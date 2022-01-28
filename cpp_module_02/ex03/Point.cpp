/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:26:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 03:21:18 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const float x, const float y): x(x), y(y) {}

Point::Point(const Point& p): x(p.x), y(p.y) {}

Point::~Point() {}

Point&	Point::operator=(const Point& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

Fixed	Point::getX(void)
{
	return (x);
}

Fixed	Point::getY(void)
{
	return (y);
}
