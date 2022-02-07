/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:39:03 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/07 21:25:44 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
public:
	virtual ~Base();
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
