/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:21:34 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/31 18:20:44 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;

public:
	DiamondTrap();
	DiamondTrap(std::string str);
	~DiamondTrap();

	void	attack(std::string const & target);
	void	whoAmI(void);

	int		getHp(void) const;
	int		getEp(void) const;
	int		getAd(void) const;
};


#endif
