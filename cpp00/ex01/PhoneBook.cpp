/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:28:34 by msainton          #+#    #+#             */
/*   Updated: 2022/09/30 18:32:01 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(int index)
{
	index = 0;
    return ;
}

void	PhoneBook::add_contact_to_directory(Contact my_contact, int index)
{
	if (index >= 7)
	{
		directory[index % 8] = my_contact;
		this->index = index % 8;
	}
	else
	{
		directory[index] = my_contact;
		this->index = index;
	}
    return ;
}

void	PhoneBook::print(int index)
{
    std::stringstream ss;
    ss << index;
    std::string s_index = ss.str();
	directory[index].syntaxe(s_index);
	std::cout << index + 1;
	directory[index].print();
	std::cout << std::endl;
}

void	PhoneBook::print_full(int i)
{
	directory[i].print_full();
    return ;
}

void	PhoneBook::search(int index)
{
	int	i;

	i = 0;
	while (i < index && i < 8)
	{
		print(i);
		i++;
	}
    return ;
}

