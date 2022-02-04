/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/04 17:33:20 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default Constructor" << std::endl;
	type = "cat";
	brain = new Brain();
}

Cat::Cat(const Cat& other)
{
	std::cout << "[Cat] Copy Constructor" << std::endl;
	type = other.getType();
	brain = new Brain();
	setBrainIdeas(other.getBrainIdea(), other.getBrainSize());
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor" << std::endl;
	delete brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "[Cat] Assignment Operator" << std::endl;
	type = other.getType();
	setBrainIdeas(other.getBrainIdea(), other.getBrainSize());

	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "\"ya ong\"" << std::endl;
}

std::string	*Cat::getBrainIdea(void) const
{
	return (brain->getIdea());
}

int			Cat::getBrainSize(void) const
{
	return (brain->getSize());
}

void		Cat::setBrainIdeas(std::string *arr, int n)
{
	brain->setIdeas(arr, n);
}
