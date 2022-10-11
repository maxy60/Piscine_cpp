/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:09:43 by msainton          #+#    #+#             */
/*   Updated: 2022/10/11 16:19:02 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 0, 25, 5)
{
	_target = target;
	std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm : copie constructor called" << std::endl;
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : destructor called" << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::beExec() const
{
	std::cout << _target << " was forgiven by Zaphod Beeblerox." << std::endl;
}