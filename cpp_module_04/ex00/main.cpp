/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:39:55 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/01 23:52:07 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		std::cout << "========== Animal class test ==========" << std::endl;

		const Animal *animal = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		std::cout << "dog's type: " << dog->getType() << std::endl;
		std::cout << "cat's type: " << cat->getType() << std::endl;

		std::cout << "animal sound: ";
		animal->makeSound();
		std::cout << "dog's sound: ";
		dog->makeSound();
		std::cout << "cat's sound: ";
		cat->makeSound();
	
		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	{
		std::cout << "======== WrongAnimal class test ========" << std::endl;

		const WrongAnimal *animal = new WrongAnimal();
		const WrongAnimal *dog = new WrongDog();
		const WrongAnimal *cat = new WrongCat();

		std::cout << "dog's type: " << dog->getType() << std::endl;
		std::cout << "cat's type: " << cat->getType() << std::endl;

		std::cout << "animal sound: ";
		animal->makeSound();
		std::cout << "dog's sound: ";
		dog->makeSound();
		std::cout << "cat's sound: ";
		cat->makeSound();
	
		delete animal;
		delete dog;
		delete cat;
	}

	return (0);
}
