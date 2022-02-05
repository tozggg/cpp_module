/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:58:37 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 00:28:18 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

# define R_NAME "RobotomyRequest"
# define R_SIGN_GRADE 72
# define R_EXEC_GRADE 45

class RobotomyRequestForm : public Form
{
private:
	std::string	target;

public:
	RobotomyRequestForm(std::string str);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

	void	execute(const Bureaucrat& executor) const;
};

#endif
