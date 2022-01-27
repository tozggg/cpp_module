/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:46:00 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 17:57:00 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(void)
{
	string	str = "HI THIS IS BRAIN";

	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "address(stringPTR) : " << stringPTR << endl;
	cout << "address(stringREF) : " << &stringREF << endl;
	cout << endl;
	cout << "string(stringPTR) : " << *stringPTR << endl;
	cout << "string(stringREF) : " << stringREF << endl;

	return (0);
}
