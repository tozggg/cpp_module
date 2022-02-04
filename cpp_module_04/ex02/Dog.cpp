/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:32:41 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/04 16:54:08 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default Constructor" << std::endl;
	type = "dog";
	brain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << "[Dog] Copy Constructor" << std::endl;
	type = other.getType();
	brain = new Brain();
	setBrainIdeas(other.getBrainIdea(), other.getBrainSize());
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
	delete brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "[Dog] Assignment Operator" << std::endl;
	type = other.getType();
	setBrainIdeas(other.getBrainIdea(), other.getBrainSize());

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "\"mung mung\"" << std::endl;
}

std::string	*Dog::getBrainIdea(void) const
{
	return (brain->getIdea());
}

int			Dog::getBrainSize(void) const
{
	return (brain->getSize());
}

void		Dog::setBrainIdeas(std::string *arr, int n)
{
	brain->setIdeas(arr, n);
}
