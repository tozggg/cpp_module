/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:28:29 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/28 16:05:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

using std::cout;
using std::endl;
using std::string;

class Karen
{
private:
	string	str[4];
	void	(Karen::*func[4])(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Karen();
	void	complain(std::string level);
	void	filter(std::string level);
};

#endif
