/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:21:15 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 14:58:41 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>

# define LEFT 1
# define RIGHT -1
# define INNER 0

class Point
{
private:
	const Fixed x;
	const Fixed	y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& p);
	~Point();

	Point&	operator=(const Point& other);

	const Fixed getX(void);
	const Fixed getY(void);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
