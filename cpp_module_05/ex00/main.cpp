/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:04:01 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 15:56:00 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat k = Bureaucrat("kim", 133);
		std::cout << k << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat k = Bureaucrat("kim", 151);
		std::cout << k << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat k = Bureaucrat("kim", 0);
		std::cout << k << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat k = Bureaucrat("kim", 13);
		std::cout << k << std::endl;
		for (int i = 0; i < 3; i++)
			k.increaseGrade();
		std::cout << k << std::endl;
		for (int i = 0; i < 7; i++)
			k.decreaseGrade();
		std::cout << k << std::endl;
		for (int i = 0; i < 20; i++)
			k.increaseGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
