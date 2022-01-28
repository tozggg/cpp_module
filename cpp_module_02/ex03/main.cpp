/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:15:14 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 03:30:24 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {

	Point a(-100, -250.123123);
	Point b(-100, 500);
	Point c(500, 250);

// const 헤더 형석에 맞춰서 넣기!!!!
// 예제 준비
// 벡터 설명 준비

	Point arr[5] = {Point(2, 3), Point(3, 3), Point(1, 1), Point(4, 2), Point(0, 0)};

	for (int i = 0; i < 5; i++)
	{
		if (bsp(a, b, c, arr[i]))
			std::cout << i << " is in" << std::endl;
		else
			std::cout << i << " is out" << std::endl;
	}

}
