/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:30 by msainton          #+#    #+#             */
/*   Updated: 2022/10/23 12:55:15 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat employed(20, "Joey");
		Intern Larbin;
		AForm	*rrf;
		rrf = Larbin.makeForm("robotomy request", "Bender");
		rrf->beSigned(employed);
		rrf->execute(employed);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		Intern Larbin;
        Bureaucrat employed(20, "Joey");
		AForm	*srf;
		srf = Larbin.makeForm("shrubbery request", "forest");
        srf->beSigned(employed);
		srf->execute(employed);
		delete srf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		Intern Larbin;
		AForm	*prf;
		prf = Larbin.makeForm("presidential request", "Kennedy");
		delete prf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		Intern Larbin;
		AForm	*erf;
		erf = Larbin.makeForm("bad request", "forest");
		delete erf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}