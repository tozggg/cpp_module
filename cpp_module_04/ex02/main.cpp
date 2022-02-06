/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:39:55 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 13:32:47 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	print_dog_ideas(Dog& dog)
{
	std::string *arr = dog.getBrainIdea();
	int	size = dog.getBrainSize();
	
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << "\t";
	std::cout << std::endl << std::endl;
}

int	main(void)
{
	Animal	*animals[10];

	std::cout << "----- create animals -----" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "> animals[" << i << "] created\n" << std::endl;
	}
	std::cout << "----- animals sound -----" << std::endl;
	for (int i = 0; i < 10; i++)
	{	
		std::cout << "animals[" << i << "] sound: ";
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	std::cout << "----- destroy animals -----" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << "> animals[" << i << "] destroyed\n" << std::endl;
	}


	std::cout << "=================================\n" << std::endl;


	std::string ideas1[3] = {"111", "222", "333"};
	std::string ideas2[4] = {"aa", "bb", "cc", "dd"};

	Dog dog = Dog();
	std::cout << "> dog created\n" << std::endl;

	dog.setBrainIdeas(ideas1, 3);
	std::cout << "----- dog set ideas1 -----\n" << std::endl;
	std::cout << "dog's ideas :\t";
	print_dog_ideas(dog);

	Dog copyDog1(dog);
	std::cout << "> copyDog1 created\n" << std::endl;
	Dog copyDog2;
	copyDog2 = dog;
	std::cout << "> copyDog2 created\n" << std::endl;

	dog.setBrainIdeas(ideas2, 4);
	std::cout << "----- dog set ideas2 -----\n" << std::endl;
	std::cout << "dog's ideas :\t";
	print_dog_ideas(dog);

	std::cout << "copyDog1's ideas :\t";
	print_dog_ideas(copyDog1);
	std::cout << "copyDog2's ideas :\t";
	print_dog_ideas(copyDog2);

//	Animal animal;	

	return (0);
}
