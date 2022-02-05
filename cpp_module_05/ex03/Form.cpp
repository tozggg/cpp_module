/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:24:44 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 00:49:00 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("undefined"), signGrade(0), executeGrade(0)
{
	is_signed = false;
}

Form::Form(std::string str, int n1, int n2) : name(str), signGrade(n1), executeGrade(n2)
{
	if (n1 < 1 || n2 < 1)
		throw (GradeTooHighException());
	if (n1 > 150 || n2 > 150)
		throw (GradeTooLowException());
	is_signed = false;
}

Form::Form(const Form& other) : name(other.getName()), signGrade(other.getSignGrade()), executeGrade(other.getExecuteGrade())
{
	is_signed = other.getSigned();
}

Form::~Form()
{
}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return (*this);

	*(const_cast<std::string *>(&name)) = other.getName();
	is_signed = other.getSigned();
	*(const_cast<int *>(&signGrade)) = other.getSignGrade();
	*(const_cast<int *>(&executeGrade)) = other.getExecuteGrade();
	return (*this);
}

std::string	Form::getName(void) const
{
	return (name);
}

bool		Form::getSigned(void) const
{
	return (is_signed);
}

int			Form::getSignGrade(void) const
{
	return (signGrade);
}

int			Form::getExecuteGrade(void) const
{
	return (executeGrade);
}

void		Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() <= signGrade)
		is_signed = true;
	else
		throw (GradeTooLowException());
}

void		Form::executableTest(const Bureaucrat& bur) const
{
	if (bur.getGrade() > executeGrade)
		throw (GradeTooLowException());
	if (is_signed == false)
		throw (NotSignedException());
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("Exception: grade is too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("Exception: grade is too low");
}

const char* Form::NotSignedException::what(void) const throw()
{
	return ("Exception: form is not signed");
}

std::ostream& operator<<(std::ostream& ost, const Form& form)
{
	ost << "<" << form.getName() << ">";
	ost << ", form signed ";
	ost << "<" << std::boolalpha << form.getSigned() << ">";
	ost << " / sign grade ";
	ost << "<" << form.getSignGrade() << ">";
	ost << " / execute grade ";
	ost << "<" << form.getExecuteGrade() << ">";
	return (ost);
}
