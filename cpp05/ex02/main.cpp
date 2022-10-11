/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:30 by msainton          #+#    #+#             */
/*   Updated: 2022/10/11 16:36:39 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    
    try {
        ShrubberyCreationForm form("garden");
		Bureaucrat James(120, "James");
		form.beSigned(James);
		form.execute(James);
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
        ShrubberyCreationForm form("garden");
		Bureaucrat larbin(140, "larbin");
		form.beSigned(larbin);
		form.execute(larbin);
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
        ShrubberyCreationForm form("garden");
		Bureaucrat larbin(146, "larbin");
		form.beSigned(larbin);
		form.execute(larbin);
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
        RobotomyRequestForm form("frankenstein");
		Bureaucrat huge(30, "larbin");
		form.beSigned(huge);
		form.execute(huge);
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
        PresidentialPardonForm form("he owes me an apology");
		Bureaucrat boss(1, "the wordl boss");
		form.beSigned(boss);
		form.execute(boss);
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
        PresidentialPardonForm form("he owes me an apology");
		Bureaucrat boss(1, "the wordl boss");
		boss.executeForm(form);
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}