/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:53:15 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/27 19:27:18 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;

int	error_out(string msg)
{
	cerr << msg << endl;
	return (1);
}

void	make_line(std::ofstream &fout, string line, string find, string replace)
{
	size_t	ptr;

	while ((ptr = line.find(find)) != string::npos)
	{	
		line.erase(ptr, find.length());
		line.insert(ptr, replace);
	}
	fout << line << endl;
}

int	main(int ac, char *av[])
{
	if (ac != 4)
		return (error_out("usage: ./replace [filename] [find_str] [replace_str]"));
	if (string(av[2]).empty() || string(av[3]).empty())
		return (error_out("Error: str is empty"));
	
	std::ifstream	fin(av[1]);
	if (!fin.is_open())
		return (error_out("Error: file does not open"));

	string			outfilename = string(av[1]) + ".replace";
	std::ofstream	fout(outfilename.c_str());
	if (!fout.is_open())
		return (error_out("Error: outfile does not create"));

	string			line;
	while (getline(fin, line))
		make_line(fout, line, av[2], av[3]);
	fin.close();
	fout.close();	
	return (0);
}
