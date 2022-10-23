/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:28:47 by msainton          #+#    #+#             */
/*   Updated: 2022/10/23 12:51:41 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default")
{
    std::cout << "AForm : Default constructor called" << std::endl;
    return ;
}

AForm::AForm(std::string name, int const  gs, int const es) : _name(name), _signed_form(false), _grade_signed(gs), _exe_signed(es)
{
	if (_grade_signed > 150 || _exe_signed > 150)
        throw(AForm::GradeTooHighException());
    else if (_grade_signed < 1 || _exe_signed < 1)
        throw(AForm::GradeTooLowException());
    std::cout << "AForm : constructor called" << std::endl;
    return ;
}

AForm::~AForm()
{
    std::cout << "AForm : destructor called" << std::endl;
    return ;
}

AForm::AForm(AForm const &src) : _name(src._name), _signed_form(src._signed_form), _grade_signed(src._grade_signed), _exe_signed(src._exe_signed)
{
    std::cout << "AForm : copie constructor called" << std::endl;
    *this = src;
    return ;
}

AForm & AForm::operator=(AForm const &rhs)
{
	this->_signed_form = rhs.getSF();
	this->_grade_signed = rhs.getGS();
	this->_exe_signed = rhs.getES();
	return (*this);
}

std::string const	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSF() const
{
	return (_signed_form);
}

int		AForm::getGS() const
{
	return (_grade_signed);
}

int		AForm::getES() const
{
	return (_exe_signed);
}

void	AForm::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() <= this->_grade_signed)
		this->_signed_form = true;
	else
        throw(Bureaucrat::GradeTooHighException());
}


const char *AForm::GradeTooHighException::what() const throw()
{
    return ("AForm can't required a grade that low");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("AForm can't required a grade that low");
}

const char *AForm::IsNotSigned::what() const throw()
{
    return ("can't exec because Form is not signed");
}

const char *AForm::ExecutorCantSigned::what() const throw()
{
    return ("can't exec grade is to low");
}

void	AForm::execute(Bureaucrat const &executor) const
{
		if (getSF() == false)
        throw(AForm::IsNotSigned());
	else if (executor.getGrade() > getES())
		throw(AForm::ExecutorCantSigned());
	this->beExec();
}

std::ostream	&operator<<(std::ostream &o, AForm const &src)
{
	o << src.getName() << " signed : " << src.getSF() << " you must have " << src.getGS() << " to sign " << " and you must have " << src.getES() << " to execute" << std::endl;
	return (o);
}