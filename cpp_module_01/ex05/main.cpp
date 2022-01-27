/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:53:20 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/27 21:42:22 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen = Karen();

	cout << "[DEBUG]" << endl; 
	karen.complain("DEBUG");
	cout << endl;

	cout << "[INFO]" << endl; 
	karen.complain("INFO");
	cout << endl;

	cout << "[WARNING]" << endl; 
	karen.complain("WARNING");
	cout << endl;

	cout << "[ERROR]" << endl; 
	karen.complain("ERROR");
	cout << endl;

	return (0);
}
