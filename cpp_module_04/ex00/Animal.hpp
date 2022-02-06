/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:17:33 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:31:12 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();

	Animal&	operator=(const Animal& other);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};
#endif
