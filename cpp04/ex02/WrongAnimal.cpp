/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:30:34 by msainton          #+#    #+#             */
/*   Updated: 2022/10/05 15:40:15 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("probably a murloc")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : _type(src._type)
{
	*this = src;
	std::cout << "WrongAnimal: copie constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

const std::string	WrongAnimal::get_type() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->get_type() << ": this animal make a very strange noise" << std::endl;
	return ;
}