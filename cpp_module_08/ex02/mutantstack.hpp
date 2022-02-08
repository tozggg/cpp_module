/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:58:21 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/09 01:46:48 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack() {};
	MutantStack(const MutantStack& other) { *this = other; };
	~MutantStack() {};

	MutantStack&	operator=(const MutantStack& other)
	{
		*this = other;
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;

	iterator							begin(void) 		{ return (this->c.begin()); };
	iterator							end(void)			{ return (this->c.end()); };
	const_iterator						cbegin(void) const	{ return (this->c.cbegin()); };
	const_iterator						cend(void) const	{ return (this->c.cend()); };
	reverse_iterator					rbegin(void)		{ return (this->c.rbegin()); };
	reverse_iterator					rend(void)			{ return (this->c.rend()); };
};

#endif
