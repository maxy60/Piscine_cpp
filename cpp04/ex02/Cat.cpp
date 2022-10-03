/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:22:51 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 15:51:34 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->_type = "Cat";
    this->idea = new Brain();
	std::cout << "Cat: Default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src) : AAnimal::AAnimal(src)
{
	*this = src;
	std::cout << "Cat: copie constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" <<std::endl;
    delete idea;
	return ;
}

Cat & Cat::operator=(AAnimal const &rhs)
{
	this->_type = rhs.get_type();
	this->idea = rhs.get_brain();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->get_type() << ": MIAOU MIAOU !!!" << std::endl;
	return ;
}

Brain	*Cat::get_brain()const
{
	return (this->idea);
}