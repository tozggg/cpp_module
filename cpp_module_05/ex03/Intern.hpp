/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:49:36 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 02:41:43 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern;

typedef struct	s_forms
{
	std::string	name;
	Form*		(Intern::*getForm)(std::string target);
}				t_forms;

class Intern
{
public:
	Intern();
	Intern(const Intern& other);
	~Intern();

	Intern&	operator=(const Intern& other);

	Form*	getSForm(std::string target);
	Form*	getRForm(std::string target);
	Form*	getPForm(std::string target);
	Form*	makeForm(std::string name, std::string target);

	class NoNameFormException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
};

#endif
