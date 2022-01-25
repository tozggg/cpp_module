/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:23:57 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/25 21:43:04 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	size = 0;
	index = -1;
}

string	Phonebook::input_field(string msg)
{
	string	str;
	while (str.empty() && !cin.eof())
	{
		cout << msg;
		getline(cin, str);
	}
	return (str);
}

void	Phonebook::add(void)
{
	string firstname = input_field("input first name     : ");
	string lastname = input_field("input last name      : ");
	string nickname = input_field("input nickname       : ");
	string phone = input_field("input phone number   : ");
	string secret = input_field("input darkest secret : ");

	if (size < 8)
		++size;
	++index;
	if (index >= 8)
		index = 0;
	arr[index] = Contact(firstname, lastname, nickname, phone, secret);
}

void	Phonebook::search_input_loop(void)
{
	string	s;
	int		i;

	while (s != "q")
	{
		cout << "display detail index?(quit : q) : ";
		getline(cin, s);
		if (cin.eof())
			break ;
		if (s.empty())
			continue ;
		std::stringstream stream(s);
		stream >> i;
		if (0 < i && i <= size)
		{
			arr[i - 1].print_contact_detail();
			break ;
		}
	}
}

void	Phonebook::search(void)
{
	int		i;
	
	if (size == 0)
	{
		cout << "Empty Phonebook!" << endl;
		return ;
	}
	cout << "|----------|----------|----------|----------|" << endl;
	cout << "|index     |first name|last name |nickname  |" << endl;
	cout << "|----------|----------|----------|----------|" << endl;
	i = -1;
	while (++i < size)
		arr[i].print_contact(i + 1);
	cout << "|----------|----------|----------|----------|" << endl;
	search_input_loop();
}
