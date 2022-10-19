/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:30:46 by msainton          #+#    #+#             */
/*   Updated: 2022/10/19 16:43:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: Default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "WrongCat: copie constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" <<std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->get_type() << ": MIAOU MIAOU !!!" << std::endl;
	return ;
}