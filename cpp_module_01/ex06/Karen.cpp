/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:43:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 16:10:57 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	str[DEBUG] = "DEBUG";
	str[INFO] = "INFO";
	str[WARNING] = "WARNING";
	str[ERROR] = "ERROR";

	func[DEBUG] = &Karen::debug;
	func[INFO] = &Karen::info;
	func[WARNING] = &Karen::warning;
	func[ERROR] = &Karen::error;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl; 
	std::cout << "I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout <<	"You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout <<	"I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
		{
			(this->*func[i])();
			return ;
		}
	}
}

void	Karen::filter(std::string level)
{
	int		n_level;

	n_level = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
			n_level = i;
	}

	switch (n_level)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			complain("DEBUG");
			std::cout << std::endl;

		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			complain("INFO");
			std::cout << std::endl;

		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			complain("WARNING");
			std::cout << std::endl;

		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			complain("ERROR");
			std::cout << std::endl;
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}	
}
