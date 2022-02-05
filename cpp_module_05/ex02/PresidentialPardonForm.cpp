/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:39:20 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 00:40:35 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form(P_NAME, P_SIGN_GRADE, P_EXEC_GRADE)
{
	target = str;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this == &other)
		return (*this);
	
	target = other.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	executableTest(executor);

	std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}
