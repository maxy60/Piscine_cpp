/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:26:59 by msainton          #+#    #+#             */
/*   Updated: 2022/09/30 15:23:22 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "cstdlib"

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