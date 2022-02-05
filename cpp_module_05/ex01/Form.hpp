/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:08:10 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/05 20:12:57 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			signGrade;
	const int			executeGrade;

public:
	Form();
	Form(std::string str, int n1, int n2);
	Form(const Form& other);
	~Form();

	Form&		operator=(const Form& other);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;
	void		beSigned(const Bureaucrat& bur);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& ost, const Form& form);

#endif
