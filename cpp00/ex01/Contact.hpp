/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:51:38 by msainton          #+#    #+#             */
/*   Updated: 2022/09/30 15:20:11 by msainton         ###   ########.fr       */
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

bool    empty_or_not(std::string str);

#endif