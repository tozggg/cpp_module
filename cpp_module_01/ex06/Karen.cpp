/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:43:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/28 16:26:41 by taejkim          ###   ########.fr       */
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
	cout << "I love to get extra bacon for my XL-double-cheese-triple-pickle-special-ketchup burger." << endl; 
	cout << "I just love it!" << endl;
}

void	Karen::info(void)
{
	cout << "I cannot believe adding extra bacon cost more money." << endl;
	cout <<	"You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void	Karen::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free." << endl;
	cout <<	"I’ve been coming here for years and you just started working here last month." << endl;
}

void	Karen::error(void)
{
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
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
			cout << "[ DEBUG ]" << endl;
			complain("DEBUG");
			cout << endl;

		case INFO:
			cout << "[ INFO ]" << endl;
			complain("INFO");
			cout << endl;

		case WARNING:
			cout << "[ WARNING ]" << endl;
			complain("WARNING");
			cout << endl;

		case ERROR:
			cout << "[ ERROR ]" << endl;
			complain("ERROR");
			cout << endl;
			break ;

		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}	
}
