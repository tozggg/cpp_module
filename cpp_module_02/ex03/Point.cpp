/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:26:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 14:56:19 by taejkim          ###   ########.fr       */
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

const Fixed	Point::getX(void)
{
	return (x);
}

const Fixed	Point::getY(void)
{
	return (y);
}
