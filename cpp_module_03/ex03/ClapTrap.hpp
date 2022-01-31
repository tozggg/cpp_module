/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:09:39 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 17:50:28 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define C_HP 10
# define C_EP 10
# define C_AD 0

class ClapTrap
{
protected:
	std::string	name;
	int			hitpoints;
	int			energy;
	int			attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string str);
	~ClapTrap();

	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
