/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:11:23 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 01:11:24 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : Form(S_NAME, S_SIGN_GRADE, S_EXEC_GRADE)
{
	target = str;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this == &other)
		return (*this);
	
	target = other.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	executableTest(executor);

	std::string 	tree =	"                 X                 \n"
							"                XXX                \n"
							"              XXXXXXX              \n"
							"            XXXXXXXXXXX            \n"
							"              XXXXXXX              \n"
							"            XXXXXXXXXXX            \n"
							"          XXXXXXXXXXXXXXX          \n"
							"        XXXXXXXXXXXXXXXXXXX        \n"
							"          XXXXXXXXXXXXXXX          \n"
							"        XXXXXXXXXXXXXXXXXXX        \n"
							"      XXXXXXXXXXXXXXXXXXXXXXX      \n"
							"    XXXXXXXXXXXXXXXXXXXXXXXXXXX    \n"
							"      XXXXXXXXXXXXXXXXXXXXXXX      \n"
							"    XXXXXXXXXXXXXXXXXXXXXXXXXXX    \n"
							"  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  \n"
							"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"
							"               #####               \n"
							"               #####               \n"
							"               #####               ";
							
	std::string		outfilename = target + "_shrubbery";
	std::ofstream	fout(outfilename.c_str());
	if (!fout.is_open())
		throw (FileNotOpenException());
	fout << tree;
	fout.close();
}

const char* ShrubberyCreationForm::FileNotOpenException::what(void) const throw()
{
	return ("Exception: file does not open");
}
