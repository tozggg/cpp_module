/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:01:01 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 01:07:08 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string str) : Form(R_NAME, R_SIGN_GRADE, R_EXEC_GRADE)
{
	target = str;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this == &other)
		return (*this);
	
	target = other.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	executableTest(executor);

	std::cout << "* some drilling noises *" << std::endl;

	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << "<" << target << "> has been robotomized successful" << std::endl;
	else
		std::cout << "<" << target << "> failed to be robotomize" << std::endl;
}
