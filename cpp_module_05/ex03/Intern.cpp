/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:13:04 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 02:43:48 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Form*	Intern::getSForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::getRForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::getPForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	t_forms	formsArr[3] =	{
								{"shrubbery creation", &Intern::getSForm},
								{"robotomy request", &Intern::getRForm},
								{"presidential pardon", &Intern::getPForm}
							};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == formsArr[i].name)
		{
			std::cout << "Intern creates <" << name << ">";
			return ((this->*formsArr[i].getForm)(target));
		}
	}
	throw (NoNameFormException());
}

const char* Intern::NoNameFormException::what(void) const throw()
{
	return ("Exception: dose not exist form name");
}
