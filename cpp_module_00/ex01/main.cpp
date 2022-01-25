/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:44:10 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/25 21:38:12 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	string		cmd;

	cout << " ======= My Awesome Phonebook ======= " << endl;
	while (!cin.eof())
	{
		cout << "ADD or SEARCH or EXIT : ";
		std::getline(cin, cmd);
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT" || cmd == "q")
			break;
	}
	cout << "EXIT!" << endl;
	return (0);
}
