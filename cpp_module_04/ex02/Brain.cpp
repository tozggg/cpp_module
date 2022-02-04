/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:22:18 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/04 17:58:09 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default Constructor" << std::endl;
	brain_clear();
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor" << std::endl;
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

