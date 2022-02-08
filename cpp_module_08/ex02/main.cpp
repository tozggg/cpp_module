/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:04:01 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 01:44:58 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;

		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "---------------------------------------" << std::endl;
	{
		MutantStack<double> mstack;

		mstack.push(1.2);
		mstack.push(2.3);
		mstack.push(3.4);
		mstack.push(4.5);

		MutantStack<double>::const_iterator cit = mstack.cbegin();
		//*cit = 5.6;
		MutantStack<double>::const_iterator cite = mstack.cend();
		
		++cit;
		--cit;
		while (cit != cite)
		{
			std::cout << *cit << std::endl;
			++cit;
		}
	}
	std::cout << "---------------------------------------" << std::endl;
	{
		MutantStack<std::string> mstack;

		mstack.push("aa");
		mstack.push("bb");
		mstack.push("cc");
		mstack.push("dd");

		MutantStack<std::string>::reverse_iterator rit = mstack.rbegin();
		MutantStack<std::string>::reverse_iterator rite = mstack.rend();
		
		++rit;
		--rit;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	return 0;
}
