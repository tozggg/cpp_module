/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:19:45 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/04 17:18:06 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
	
public:
	Cat();
	Cat(const Cat& other);
	~Cat();

	Cat&		operator=(const Cat& other);

	void		makeSound(void) const;
	std::string	*getBrainIdea(void) const;
	int			getBrainSize(void) const;
	void		setBrainIdeas(std::string *arr, int n);
};
#endif
