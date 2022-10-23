/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:28:47 by msainton          #+#    #+#             */
/*   Updated: 2022/10/23 12:43:01 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default")
{
    std::cout << "Form : Default constructor called" << std::endl;
    return ;
}

Form::Form(std::string name, int const  gs, int const es) : _name(name), _signed_form(false), _grade_signed(gs), _exe_signed(es)
{
	if (_grade_signed > 150 || _exe_signed > 150)
        throw(Form::GradeTooHighException());
    else if (_grade_signed < 1 || _exe_signed < 1)
        throw(Form::GradeTooLowException());
    std::cout << "Form : constructor called" << std::endl;
    return ;
}

Form::~Form()
{
    std::cout << "Form : destructor called" << std::endl;
    return ;
}

Form::Form(Form const &src) : _name(src._name), _signed_form(src._signed_form), _grade_signed(src._grade_signed), _exe_signed(src._exe_signed)
{
    std::cout << "Form : copie constructor called" << std::endl;
    *this = src;
    return ;
}

Form & Form::operator=(Form const &rhs)
{
	this->_signed_form = rhs.getSF();
	this->_grade_signed = rhs.getGS();
	this->_exe_signed = rhs.getES();
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSF() const
{
	return (_signed_form);
}

int		Form::getGS() const
{
	return (_grade_signed);
}

int		Form::getES() const
{
	return (_exe_signed);
}

void	Form::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() <= this->_grade_signed)
		this->_signed_form = true;
	else
        throw(Form::GradeTooLowException());
}

void    Form::setSF(bool signedF)
{
    this->_signed_form = signedF;
}

void    Form::setGS(int signedG)
{
    this->_grade_signed = signedG;
}

void    Form::setES(int signedE)
{
    this->_exe_signed = signedE;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade to low");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade to high");
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << " signed : " << src.getSF() << " you must have " << src.getGS() << " to sign " << " and you must have " << src.getES() << " to execute" << std::endl;
	return (o);
}