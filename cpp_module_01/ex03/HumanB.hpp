/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:26:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/27 15:23:49 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
private:
	string	name;
	Weapon	*weapon;

public:
	HumanB(string name);

	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
