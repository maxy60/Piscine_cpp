/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:16:11 by msainton          #+#    #+#             */
/*   Updated: 2022/09/09 13:36:19 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* add search  exit*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <limits>
#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::param_contact(int i)
{
	if (i == 0)
		std::cout << "first name : ";
	if (i == 1)
		std::cout << "last name : ";
	if (i == 2)
		std::cout << "nickname : ";
	if (i == 3)
		std::cout << "phone number : ";
	if (i == 4)
		std::cout << "darkest secret : ";
}

bool	empty_or_not(std::string str)
{
	char	c;
	int		i;
	int		count;

	c = 1;
	i = 0;
	count = 0;
	if (str == "")
		return false;
	while (c != '\0')
	{
		c = str[i];
		if (isspace(c))
			count++;
		i++;
	}
	if (i == count +1)
		return false;
	else
		return (true);
}

bool	Contact::add_contact(int i)
{
	std::string input;
	param_contact(i);
	std::getline(std::cin, input);
	if (empty_or_not(input) == false)
	{
		std::cout << "can't be empty" << std::endl;
		i--;
		return false;
	}
	if (i == 0)
		this->first_name = input;
	if (i == 1)
		this->last_name = input;
	if (i == 2)
		this->nickname = input;
	if (i == 3)
		this->phone_number = input;
	if (i == 4)
		this->darkest_secret = input;
	return true;
}

std::string	Contact::cut_string(std::string str)
{
	std::string tmp;
	
	if (str.length() > 10)
	{
		tmp = str.substr(0, 9);
		tmp.replace(9, 1, ".");
		syntaxe(str);
		return tmp;
	}
	syntaxe(str);
	return str;
}

void	Contact::syntaxe(std::string str)
{
		int i;
	
	i = 0;
	std::cout << '|';
	if ((i = str.length()) <= 9)
	{
		while (i < 10)
		{
			std::cout << ' ';
			i++;
		}
	}
}

void	Contact::print()
{
	std::cout << cut_string(first_name) << cut_string(last_name) << cut_string(nickname) << '|';
}

void	Contact::print_full()
{
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name : " << last_name << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phone_number << std::endl;
	std::cout << "darkest secret : " << darkest_secret << std::endl;
	
}

PhoneBook::PhoneBook(int index)
{
	index = 0;
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
}

void	PhoneBook::print(int index)
{
	directory[index].syntaxe(std::to_string(index));
	std::cout << index + 1;
	directory[index].print();
	std::cout << std::endl;
}

void	PhoneBook::print_full(int i)
{
	directory[i].print_full();
}

void	PhoneBook::search(int index)
{
	int	i;

	i = 0;
	while (i < index && i < 4)
	{
		print(i);
		i++;
	}
}

int main()
{
	int i;
	int index;
	int tmp;
	Contact	contact1;
	std::string param;

	index = 0;
	PhoneBook my_phonebook(index);
	std::cout << "bienvenue dans ton PhoneBook" << std::endl;
	while (1)
	{
		std::cin >> param;
		if (param == "ADD")
		{
			std::cin.ignore();
			i = 0;
			while (i < 5)
			{
				if (contact1.add_contact(i) == false)
					i--;
				if (std::cin.eof())
				{
					std::cout << "^D" << std::endl;
					return 0;
				}
				i++;
			}
			my_phonebook.add_contact_to_directory(contact1, index);
			index++;
		}
		else if (param == "SEARCH")
		{
			my_phonebook.search(index);
			std::cout << "enter index : ";
			std::cin >> param;
			tmp = atoi(param.c_str());
			if ((tmp >= 1 && tmp <= 8) && tmp - 1 < index)
				my_phonebook.print_full(tmp - 1);
			else
				std::cout << "needed a correct value" << std::endl;
		}
		else if (param == "EXIT")
			break ;
		else if (std::cin.eof())
		{
			std::cout << "^D" << std::endl << "EXIT" << std::endl;
			break ;
		}
	}
}
