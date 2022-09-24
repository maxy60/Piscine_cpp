/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:51:38 by msainton          #+#    #+#             */
/*   Updated: 2022/09/15 18:21:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact {
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	void		param_contact(int i);
	bool		add_contact(int i);
	std::string	cut_string(std::string str);
	void		syntaxe(std::string str);
	void		print();
	void		print_full();
	Contact();
};

class PhoneBook {
private:
	Contact directory[8];
	int		index;
public:
	void	add_contact_to_directory(Contact my_contact, int index);
	void	print(int index);
	void	print_full(int i);
	void	search(int index);
	PhoneBook(int index);
};

#endif