/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:37:47 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/06 00:39:51 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

# define P_NAME "PresidentialPardon"
# define P_SIGN_GRADE 25
# define P_EXEC_GRADE 5

class PresidentialPardonForm : public Form
{
private:
	std::string	target;

public:
	PresidentialPardonForm(std::string str);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

	void	execute(const Bureaucrat& executor) const;
};

#endif
