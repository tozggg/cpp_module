/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:52:05 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 01:24:05 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string str, int n) : name(str)
{
	if (n < 1)
		throw (GradeTooHighException());
	if (n > 150)
		throw (GradeTooLowException());
	grade = n;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
	grade = other.grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);

	*(const_cast<std::string *>(&name)) = other.getName();
	grade = other.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (name);
}

int			Bureaucrat::getGrade(void) const
{
	return (grade);
}

void		Bureaucrat::increaseGrade(void)
{
	if (grade - 1 < 1)
		throw (GradeTooHighException());
	--grade;
}

void		Bureaucrat::decreaseGrade(void)
{
	if (grade + 1 > 150)
		throw (GradeTooLowException());
	++grade;
}

void		Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << name << "> signs <" << form.getName() << ">"; 
	}
	catch (std::exception& e)
	{
		std::cout << "<" << name << "> cannot signs <" << form.getName() << ">";
		std::cout << " because <"<< e.what() << ">";
	}
}

void		Bureaucrat::executeForm(const Form& form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << name << "> executes <" << form.getName() << ">"; 
	}
	catch (std::exception& e)
	{
		std::cout << "<" << name << "> cannot executes <" << form.getName() << ">";
		std::cout << " because <"<< e.what() << ">";
	}
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Exception: grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Exception: grade is too low");
}

std::ostream& operator<<(std::ostream& ost, const Bureaucrat& bur)
{
	ost << "<" << bur.getName() << ">";
	ost << ", bureaucrat grade ";
	ost << "<" << bur.getGrade() << ">";
	return (ost);
}
