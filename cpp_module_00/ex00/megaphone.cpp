/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:08:59 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/25 16:42:36 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	print_upper(char *str)
{
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = toupper(*str);
		std::cout << *str;
		++str;
	}
}

int main(int ac, char *av[])
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			print_upper(av[i]);	
			++i;
		}
		std::cout << std::endl;
	}
	return (0);
}
