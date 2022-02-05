/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:25:35 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/05 20:13:02 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(std::string str, int n);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat& other);

	std::string getName(void) const;
	int			getGrade(void) const;
	void		increaseGrade(void);
	void		decreaseGrade(void);
	void		signForm(Form& form);
	
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

std::ostream& operator<<(std::ostream& ost, const Bureaucrat& bur);

#endif
