/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:04:01 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 16:36:37 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat k = Bureaucrat("kim", 5);

		Form *p = new PresidentialPardonForm("zafod");
		std::cout << *p << std::endl;
		
		p->beSigned(k);
		p->execute(k);

		delete p;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat k = Bureaucrat("kim", 45);

		Form *r = new RobotomyRequestForm("robot");
		std::cout << *r << std::endl;
		
		r->beSigned(k);
		r->execute(k);

		delete r;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat k = Bureaucrat("kim", 137);

		Form *s = new ShrubberyCreationForm("tree");
		std::cout << *s << std::endl;
		
		s->beSigned(k);
		s->execute(k);

		delete s;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	{
		Bureaucrat k = Bureaucrat("kim", 1);
		Bureaucrat j = Bureaucrat("jung", 150);

		Form *p = new PresidentialPardonForm("zafod");
		std::cout << *p << std::endl;
		
		k.executeForm(*p);
		std::cout << std::endl;

		k.signForm(*p);
		std::cout << std::endl;
		
		j.executeForm(*p);
		std::cout << std::endl;

		k.executeForm(*p);
		std::cout << std::endl;

		delete p;
	}

	return (0);
}
