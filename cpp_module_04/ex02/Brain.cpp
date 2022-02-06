/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:22:18 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:49:50 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default Constructor" << std::endl;
	brain_clear();
}

Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] Copy Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	size = other.size;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor" << std::endl;
}

Brain&		Brain::operator=(const Brain& other)
{
	std::cout << "[Brain] Assignment Operator" << std::endl;
	if (this == &other)
		return (*this);

	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	size = other.size;
	return (*this);
}

void		Brain::brain_clear(void)
{
	for (int i = 0; i < 100; i++)
		ideas[i].clear();
	size = 0;
}

std::string	*Brain::getIdea(void)
{
	return (ideas);
}

int			Brain::getSize(void)
{
	return (size);
}

void		Brain::setIdeas(std::string *arr, int n)
{
	brain_clear();
	
	size = n > 100 ? 100 : n;
	for(int i = 0; i < size; i++)
		ideas[i] = arr[i];
}

