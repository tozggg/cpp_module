/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:15:04 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/08 20:02:57 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	unsigned int i;
	{
		Array<int> arr1;
		Array<int> arr2(5);

		std::cout << "arr1 size: " << arr1.size() << std::endl;
		std::cout << "arr2 size: " << arr2.size() << std::endl << std::endl;

		for (i = 0; i < 5; i++)
			arr2[i] = i + 1;

		std::cout << "arr2: ";
		for (i = 0; i < 5; i++)
			std::cout << arr2[i] << " ";
		std::cout << "\n\n";

		Array<int> arr3(arr2);
		Array<int> arr4;
		arr4 = arr2;

		for (i = 0; i < 5; i++)
			arr2[i] = 9;

		std::cout << "arr2: ";
		for (i = 0; i < 5; i++)
			std::cout << arr2[i] << " ";
		std::cout << "\n\n";
		std::cout << "arr3: ";
		for (i = 0; i < 5; i++)
			std::cout << arr3[i] << " ";
		std::cout << "\n\n";
		std::cout << "arr4: ";
		for (i = 0; i < 5; i++)
			std::cout << arr4[i] << " ";
		std::cout << "\n\n";

		try
		{
			arr2[7] = 9;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	
	}
	std::cout << "---------------------------------------" << std::endl;
	{
		Array<std::string> arr1;
		Array<std::string> arr2(3);

		std::cout << "arr1 size: " << arr1.size() << std::endl;
		std::cout << "arr2 size: " << arr2.size() << std::endl << std::endl;

		arr2[0] = "aa";
		arr2[1] = "bb";
		arr2[2] = "cc";

		std::cout << "arr2: ";
		for (i = 0; i < 3; i++)
			std::cout << arr2[i] << " ";
		std::cout << "\n\n";

		Array<std::string> arr3(arr2);
		Array<std::string> arr4;
		arr4 = arr2;

		arr2[0] = "@@";
		arr2[1] = "@@";
		arr2[2] = "@@";

		std::cout << "arr2: ";
		for (i = 0; i < 3; i++)
			std::cout << arr2[i] << " ";
		std::cout << "\n\n";
		std::cout << "arr3: ";
		for (i = 0; i < 3; i++)
			std::cout << arr3[i] << " ";
		std::cout << "\n\n";
		std::cout << "arr4: ";
		for (i = 0; i < 3; i++)
			std::cout << arr4[i] << " ";
		std::cout << "\n\n";

		try
		{
			arr2[7] = "@@";
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	
	}

	return (0);
}

