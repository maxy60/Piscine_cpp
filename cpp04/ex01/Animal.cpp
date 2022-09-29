/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:33 by msainton          #+#    #+#             */
/*   Updated: 2022/09/29 14:58:58 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("probably a murloc")
{
	std::cout << "Animal: Default constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &src) : _type(src._type)
{
	*this = src;
	std::cout << "Animal: copie constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: destructor called" <<std::endl;
	return ;
}

Animal & Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

const std::string	Animal::get_type() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << this->get_type() << ": this animal make a very strange noise" << std::endl;
	return ;
}