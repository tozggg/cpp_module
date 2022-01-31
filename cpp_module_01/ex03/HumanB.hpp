/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:26:58 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 15:50:16 by taejkim          ###   ########.fr       */
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
	std::string	name;
	Weapon	*weapon;

public:
	HumanB(std::string name);

	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
