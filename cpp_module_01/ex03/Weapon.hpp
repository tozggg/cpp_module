/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:02:54 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 18:15:20 by taejkim          ###   ########.fr       */
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
	Weapon(string str);

	const string	&getType(void);
	void			setType(string str);
};



#endif
