/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:23:53 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/25 21:41:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Phonebook
{
private:
	Contact arr[8];
	int		size;
	int		index;

	string	input_field(string msg);
	void	search_input_loop(void);

public:
	Phonebook();
	void	add(void);
	void	search(void);
};

#endif
