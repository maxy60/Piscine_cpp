/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:11:43 by msainton          #+#    #+#             */
/*   Updated: 2022/10/07 11:58:28 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat() : _name("Default")
{
    std::cout << "Bureaucrat : Default constructor" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name),   _grade(grade)
{
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : destructor" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Bureaucrat : copie constructor" << std::endl;
    *this = src;
    return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs.getGrade();
    return (*this);
}

std::string const Bureaucrat::getName()
{
    return (this->_name);
}

int     Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::setGrade(int i)
{
    //si mon grade est trop haut => throw Bureaucrat::GradeException();
    this->_grade = i;
    if (_grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade < 1)
        throw(Bureaucrat::GradeTooLowException());
    return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat Grade is to High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat Grade is to Low");
}

void    Bureaucrat::upGrade()
{
    this->_grade--;
}

void    Bureaucrat::downGrade()
{
    this->_grade++;
}