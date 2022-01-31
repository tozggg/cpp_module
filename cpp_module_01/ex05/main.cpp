/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:53:20 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 16:06:28 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen = Karen();

	std::cout << "[ DEBUG ]" << std::endl; 
	karen.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "[ INFO ]" << std::endl; 
	karen.complain("INFO");
	std::cout << std::endl;

	std::cout << "[ WARNING ]" << std::endl; 
	karen.complain("WARNING");
	std::cout << std::endl;

	std::cout << "[ ERROR ]" << std::endl; 
	karen.complain("ERROR");
	std::cout << std::endl;

	return (0);
}
