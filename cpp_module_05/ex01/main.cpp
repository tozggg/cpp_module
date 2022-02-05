/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:04:01 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 01:29:06 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Form form = Form("form", 10, 10);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form form = Form("form", 200, 200);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form form = Form("form", 10, 10);
		std::cout << form << std::endl;

		Bureaucrat k = Bureaucrat("kim", 5);
		std::cout << k << std::endl;
		
		form.beSigned(k);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form form = Form("form", 10, 10);
		std::cout << form << std::endl;

		Bureaucrat k = Bureaucrat("kim", 20);
		std::cout << k << std::endl;
		
		form.beSigned(k);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	{
		Form form1 = Form("form1", 10, 10);
		std::cout << form1 << std::endl;

		Bureaucrat k = Bureaucrat("kim", 5);
		std::cout << k << std::endl;
		
		k.signForm(form1);
		std::cout << std::endl << form1 << std::endl << std::endl;
	}

	{
		Form form2 = Form("form2", 10, 10);
		std::cout << form2 << std::endl;
		
		Bureaucrat j = Bureaucrat("jung", 20);
		std::cout << j << std::endl;
		
		j.signForm(form2);
		std::cout << std::endl << form2 << std::endl;
	}
	return (0);
}
