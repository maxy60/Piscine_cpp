/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:04:51 by msainton          #+#    #+#             */
/*   Updated: 2022/10/24 14:17:30 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern : Default constructor called" << std::endl;
    return ;
}

Intern::~Intern()
{
    std::cout << "Intern : destructor called" << std::endl;
    return ;
}

Intern::Intern(Intern const &src)
{
    std::cout << "Intern : copie constructor called" << std::endl;
    *this = src;
    return ;
}

Intern & Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

AForm	*Intern::robotomy(std::string target)
{
	AForm	*request = new RobotomyRequestForm(target);
	std::cout << "Intern creates RobotomyRequestForm for " << target << std::endl;
	return (request);
}

AForm	*Intern::shrubbery(std::string target)
{
	AForm	*request = new ShrubberyCreationForm(target);
	std::cout << "Intern creates ShrubberyCreationForm for " << target << std::endl;
	return (request);
}

AForm	*Intern::presidential(std::string target)
{
	AForm	*request = new PresidentialPardonForm(target);
	std::cout << "Intern creates PresidentialPardonForm for " << target << std::endl;
	return (request);
}

const char *Intern::FormDoesntExist::what() const throw()
{
    return ("this form doesnt exist");
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string names[3] = {"robotomy request", "shrubbery request", "presidential request"};
	
	AForm	*(Intern::*monpointeur[3])(std::string target) = {
		&Intern::robotomy,
		&Intern::shrubbery,
		&Intern::presidential,
	};
	int i = 0;
	while (name != names[i] && i <= 2)
		i++;
	if (name == names[i])
		return((this->*monpointeur[i])(target));
    throw(Intern::FormDoesntExist());
}
