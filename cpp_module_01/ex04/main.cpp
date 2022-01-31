/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:53:15 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/29 15:59:57 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error_out(std::string msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

void	make_line(std::ofstream& fout, std::string line, std::string find, std::string replace)
{
	size_t	ptr;

	while ((ptr = line.find(find)) != std::string::npos)
	{	
		line.erase(ptr, find.length());
		line.insert(ptr, replace);
	}
	fout << line << std::endl;
}

int	main(int ac, char *av[])
{
	if (ac != 4)
		return (error_out("usage: ./replace [filename] [find_str] [replace_str]"));
	if (std::string(av[2]).empty() || std::string(av[3]).empty())
		return (error_out("Error: str is empty"));
	
	std::ifstream	fin(av[1]);
	if (!fin.is_open())
		return (error_out("Error: file does not open"));

	std::string		outfilename = std::string(av[1]) + ".replace";
	std::ofstream	fout(outfilename.c_str());
	if (!fout.is_open())
		return (error_out("Error: outfile does not create"));

	std::string		line;
	while (getline(fin, line))
		make_line(fout, line, av[2], av[3]);
	fin.close();
	fout.close();	
	return (0);
}
