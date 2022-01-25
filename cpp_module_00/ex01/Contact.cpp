/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:49:23 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/25 21:18:06 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(string fn, string ln, string nn, string p, string s)
{
	firstname = fn;
	lastname = ln;
	nickname = nn;
	phone = p;
	secret = s;
}

void	Contact::print_contact(int index)
{
	string	str;

	cout << "|" << std::setw(10) << index;
	str = firstname.length() > 10 ? firstname.substr(0, 9) + "." : firstname;
	cout << "|" << std::setw(10) << str;
	str = lastname.length() > 10 ? lastname.substr(0, 9) + "." : lastname;
	cout << "|" << std::setw(10) << str;
	str = nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname;
	cout << "|" << std::setw(10) << str << "|" << endl;
}

void	Contact::print_contact_detail(void)
{
	cout << "------------------------------" << endl;
	cout << "first name     : " << firstname << endl;
	cout << "last name      : " << lastname << endl;
	cout << "nickname       : " << nickname << endl;
	cout << "phone          : " << phone << endl;
	cout << "darkest secret : " << secret << endl;
	cout << "------------------------------" << endl;
}
