/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:33:38 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/07 20:35:22 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdint>

struct	Data
{
	std::string	model;
	int			number;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data data = {"orico", 1125};

	uintptr_t	s = serialize(&data);
	Data*		d = deserialize(s);

	std::cout << "raw(adress):\t\t" << &data << std::endl;
	std::cout << "deserial(adress):\t" << d <<std::endl;

	return (0);
}
