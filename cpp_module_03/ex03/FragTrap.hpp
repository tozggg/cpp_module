/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:27:51 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 17:51:25 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define F_HP 100
# define F_EP 100
# define F_AD 30

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string str);
	~FragTrap();

	void	attack(std::string const & target);
	void	highFivesGuys(void);
};

#endif
