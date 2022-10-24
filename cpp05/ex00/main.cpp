/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:30 by msainton          #+#    #+#             */
/*   Updated: 2022/10/24 13:21:53 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    
    try {
        Bureaucrat boss;
        boss.setGrade(500);
        
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
        try {
        Bureaucrat Newboss(2, "Jeff");
		std::cout << Newboss;
		Newboss.upGrade();
		std::cout << Newboss;
		Newboss.upGrade();
		std::cout << Newboss;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}