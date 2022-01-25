/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:53:08 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/25 21:16:27 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

using std::cout;
using std::endl;
using std::string;

class Contact
{
private:
	string	firstname;
	string	lastname;
	string	nickname;
	string	phone;
	string	secret;
	
public:
	Contact();
	Contact(string fn, string ln, string nn, string p, string s);
	void	print_contact(int index);
	void	print_contact_detail(void);
};

#endif
