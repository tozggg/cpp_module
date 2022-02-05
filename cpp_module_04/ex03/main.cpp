/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:09:00 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/05 13:05:49 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	inventory_test(Character& test, Character& target)
{
	std::cout << test.getName() << "'s inventory test -----------" << std::endl;
	test.use(0, target);
	test.use(1, target);
	test.use(2, target);
	test.use(3, target);
	std::cout << "--------------------------------\n" << std::endl;
}

int main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "\n========================================\n" << std::endl;
	{
		MateriaSource storage;
		storage.learnMateria(new Ice());
		storage.learnMateria(new Cure());
		storage.learnMateria(new Ice());
		storage.learnMateria(new Cure());
		storage.learnMateria(new Ice());
		std::cout << std::endl;

		Character kim = Character("kim");
		kim.equip(storage.createMateria("ice"));
		kim.equip(storage.createMateria("ice"));
		kim.equip(storage.createMateria("ice"));
		kim.equip(storage.createMateria("ice"));
		kim.equip(storage.createMateria("ice"));
		std::cout << std::endl;

		Character target = Character("target");
		inventory_test(kim, target);

		Character kimCopy1(kim);
		Character kimCopy2;
		kimCopy2 = kim;
		std::cout << std::endl;

		kim.unequip(0);
		kim.unequip(1);
		kim.unequip(2);
		kim.unequip(3);
		kim.equip(storage.createMateria("cure"));
		kim.equip(storage.createMateria("cure"));
		kim.equip(storage.createMateria("cure"));
		kim.equip(storage.createMateria("cure"));
		std::cout << std::endl;

		inventory_test(kim, target);
		inventory_test(kimCopy1, target);
		inventory_test(kimCopy2, target);
	}
    return 0;

}
