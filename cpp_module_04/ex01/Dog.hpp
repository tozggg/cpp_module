/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:19:45 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/04 16:52:47 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog& other);
	~Dog();

	Dog&	operator=(const Dog& other);
	
	void		makeSound(void) const;
	std::string	*getBrainIdea(void) const;
	int			getBrainSize(void) const;
	void		setBrainIdeas(std::string *arr, int n);
};
#endif
