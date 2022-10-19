/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:22:51 by msainton          #+#    #+#             */
/*   Updated: 2022/10/19 16:42:10 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat: Default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Cat: copie constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" <<std::endl;
	return ;
}

Cat & Cat::operator=(Cat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->get_type() << ": MIAOU MIAOU !!!" << std::endl;
	return ;
}