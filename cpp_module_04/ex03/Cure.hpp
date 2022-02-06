/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:15:00 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:56:49 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string	type;

public:
	Cure();
	Cure(const Cure& other);
	~Cure();

	Cure&	operator=(const Cure& other);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
