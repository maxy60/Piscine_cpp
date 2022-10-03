/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:33 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 15:38:02 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("probably a murloc")
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src) : _type(src._type)
{
	*this = src;
	std::cout << "AAnimal: copie constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: destructor called" <<std::endl;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

const std::string	AAnimal::get_type() const
{
	return (this->_type);
}
