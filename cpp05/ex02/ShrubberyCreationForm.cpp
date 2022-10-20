/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:39:20 by msainton          #+#    #+#             */
/*   Updated: 2022/10/20 11:03:11 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 0, 145, 137)
{
	_target = target;
	std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm : copie constructor called" << std::endl;
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::beExec() const
{
	std::string filename = _target + "_shrubbery";
	std::ofstream forest(filename.c_str());
	if (forest.bad())
	{
		std::cout << "ERROR: the file could not be open" << std::endl;
		forest.close();
		return ;
    }
	std::cout << "create shrub in " << _target << std::endl;
forest <<"                         "<< std::endl; 
forest <<"     ccee88oo            "<< std::endl; 
forest <<"  C8O8O8Q8PoOb o8oo      "<< std::endl;     
forest <<" dOB69QO8PdUOpugoO9bD    "<< std::endl;     
forest <<"CgggbU8OU qOp qOdoUOdcb  "<< std::endl;         
forest <<"    6OuU  /p u gcoUodpP  "<< std::endl;     
forest <<"      111//  /douUP      "<< std::endl;     
forest <<"        111////          "<< std::endl; 
forest <<"         |||/1           "<< std::endl; 
forest <<"         |||1/           "<< std::endl; 
forest <<"         |||||           "<< std::endl; 
forest <<"   .....//||||1....      "<< std::endl;     
	return ;
}