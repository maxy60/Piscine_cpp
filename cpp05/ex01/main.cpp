/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:30 by msainton          #+#    #+#             */
/*   Updated: 2022/10/10 16:28:10 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    
    try {
        Bureaucrat employe;
        employe.setGrade(20);
		Form formulaire_err("Wrong", false, 0, 10);
        
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    try {
        Bureaucrat Newboss(3, "Jeff");
		Bureaucrat looser(149, "Stifler");
		std::cout << Newboss;
		Newboss.upGrade();
		std::cout << Newboss;
		Newboss.upGrade();
		std::cout << Newboss;
		Form form("Big FORM", false, 2, 10);
		std::cout << form;
		form.beSigned(Newboss);
		std::cout << form;
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat looser(149, "Stifler");
		Form form("Big FORM", false, 2, 10);
		form.beSigned(looser);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Chandler(19, "Chandler");
		Form form("Big FORM", false, 2, 10);
		Chandler.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
}