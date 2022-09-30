/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:19:00 by msainton          #+#    #+#             */
/*   Updated: 2022/09/30 15:21:39 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <stdio.h>
#include <iostream>
#include <limits>
#include <sstream>

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