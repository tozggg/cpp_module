/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:02:54 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/27 14:58:25 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class Weapon
{
private:
	string	type;

public:
	Weapon();
	Weapon(string type);

	const string	&getType(void);
	void			setType(string type);
};



#endif
