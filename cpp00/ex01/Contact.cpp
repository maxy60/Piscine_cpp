/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:21:44 by msainton          #+#    #+#             */
/*   Updated: 2022/10/05 13:22:56 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
	
	i = str.length();
	std::cout << '|';
    std::cout << std::setw(10);
	return ;
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

void    Contact::set_first_name(std::string s)
{
    this->first_name = s;
    return ;
}

std::string Contact::get_first_name()
{
    return (this->first_name);
}