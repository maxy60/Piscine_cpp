/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:21:47 by msainton          #+#    #+#             */
/*   Updated: 2022/10/07 11:01:27 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int check_file(char *str)
{
        std::ifstream file(str);
        if (file.is_open())
        {
            return 1;
            file.close();
        }
        else
        {
            std::cout << "ERROR : the file could not be open" << std::endl;
            file.close();
            return 0; 
        }
}



void	my_replace(std::ifstream &file, char *s1, char *s2, std::string filename)
{
	std::string line;
	std::string s1bis;
	size_t pos;
	std::string	dote = ".replace";

	s1bis = s1;
	filename.append(dote);
    std::ofstream	repl(filename.c_str());
    if (repl.bad())
	{
		std::cout << "ERROR: the file could not be open" << std::endl;
		repl.close();
		return ;
    }
	while (std::getline(file, line))
	{
		pos = line.find(s1bis);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1bis.length());
			line.insert(pos, s2);
			pos = line.find(s1bis);
		}
		repl << line << std::endl;
	}
	repl.close();
}

int main(int ac, char **av)
{
    std::string	content;
    std::string	filename; 
    if (ac != 4)
    {
        std::cout << "ERROR: Wrong number of argument" << std::endl;
        return 0;
    }
    else
    {
        if (check_file(av[1]) == 0)
            return 0;
        else
        {
			filename = av[1];
			std::ifstream	file(av[1]);
            file.is_open();
			std::fstream	new_replace(filename.c_str());
			my_replace(file, av[2], av[3], filename);
            file.close();
        }
    }
    return 0;
}