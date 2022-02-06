/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:20:07 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 12:46:07 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string ideas[100];
	int			size;

	void		brain_clear(void);

public:
	Brain();
	Brain(const Brain& other);
	~Brain();

	Brain&		operator=(const Brain& other);

	std::string	*getIdea(void);
	int			getSize(void);
	void		setIdeas(std::string *arr, int n);
};

#endif
