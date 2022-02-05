/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:03:12 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 01:08:22 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURUBBERYCREATIONFORM_HPP
# define SHURUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

# define S_NAME "ShrubberyCreation"
# define S_SIGN_GRADE 145
# define S_EXEC_GRADE 137

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;

public:
	ShrubberyCreationForm(std::string str);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

	void	execute(const Bureaucrat& executor) const;

	class FileNotOpenException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
};

#endif
