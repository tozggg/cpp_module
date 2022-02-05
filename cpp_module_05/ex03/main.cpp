/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:04:01 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 02:39:21 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern i;
		Form* rrf;

		rrf = i.makeForm("shrubbery creation", "tree");
		std::cout << std::endl << *rrf << std::endl << std::endl;

		rrf = i.makeForm("robotomy request", "robo");
		std::cout << std::endl << *rrf << std::endl << std::endl;

		rrf = i.makeForm("presidential pardon", "zafod");
		std::cout << std::endl << *rrf << std::endl << std::endl;

		rrf = i.makeForm("no name", "unknown");
		std::cout << std::endl << *rrf << std::endl << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	return (0);
}
