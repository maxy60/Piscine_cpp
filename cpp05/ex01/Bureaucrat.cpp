/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:11:43 by msainton          #+#    #+#             */
/*   Updated: 2022/10/19 15:28:29 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default")
{
    std::cout << "Bureaucrat : Default constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name),   _grade(grade)
{
	if (_grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade < 1)
        throw(Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat : constructor called" << std::endl;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : destructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Bureaucrat : copie constructor called" << std::endl;
    *this = src;
    return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
   // *((std::string *)&rhs._name) = rhs._name;
    this->_grade = rhs.getGrade();
    return (*this);
}

std::string const Bureaucrat::getName() const
{
    return (this->_name);
}

int     Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::setGrade(int i)
{
    this->_grade = i;
    if (_grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade < 1)
        throw(Bureaucrat::GradeTooLowException());
    return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat can't have a grade that low");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat can't have a grade that high");
}

void    Bureaucrat::upGrade()
{
    this->_grade--;
	if (_grade < 1)
		throw(Bureaucrat::GradeTooLowException());
}

void    Bureaucrat::downGrade()
{
    this->_grade++;
	if (_grade > 150)
        throw(Bureaucrat::GradeTooHighException());
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (o);
}

void	Bureaucrat::signForm(Form const &form) const
{
	
	try
	{
		if (this->getGrade() > form.getSF())
			throw(Bureaucrat::GradeTooHighException());
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}