/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:27:10 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 17:28:13 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class Zombie
{
private:
	string	name;
	
public:
	Zombie();
	Zombie(string name);
	~Zombie();

	void	announce(void);
	void	setName(string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
