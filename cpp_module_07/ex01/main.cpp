/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:23:23 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/07 23:32:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(const T& value)
{
	std::cout << value << "\t";
}

int main(void)
{
	int			iArr[5] = {2, 4, 6, 8, 10};
	double		dArr[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
	std::string strArr[5] = {"aa", "bb", "cc", "dd", "ee"};

	iter(iArr, 5, &print);
	std::cout << std::endl;

	iter(dArr, 5, &print);
	std::cout << std::endl;
	
	iter(strArr, 5, &print);
	std::cout << std::endl;

	return (0);
}
