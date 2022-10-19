/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:22:51 by msainton          #+#    #+#             */
/*   Updated: 2022/10/19 17:21:17 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
    this->_idea = new Brain();
	std::cout << "Cat: Default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src)
{
	this->_type = src.get_type();
	this->_idea = new Brain();
	*(this->_idea) = *(src.get_brain());
	std::cout << "Cat: copie constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" <<std::endl;
    delete this->_idea;
	return ;
}

Cat & Cat::operator=(Cat const &rhs)
{
	this->_type = rhs._type;
	*(this->_idea) = *(rhs.get_brain());
	return (*this);
}

Animal & Cat::operator=(Animal const &rhs)
{
	*(this->_idea) = *(rhs.get_brain());
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->get_type() << ": MIAOU MIAOU !!!" << std::endl;
	return ;
}

Brain	*Cat::get_brain()const
{
	return (this->_idea);
}