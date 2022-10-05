/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:03:37 by msainton          #+#    #+#             */
/*   Updated: 2022/10/05 16:16:50 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->_type = "Dog";
    this->_idea = new Brain();
	std::cout << "Dog: Default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const &src) : AAnimal::AAnimal(src)
{
	this->_type = src.get_type();
	this->_idea = new Brain();
	*(this->_idea) = *(src.get_brain());
	std::cout << "Dog: copie constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" <<std::endl;
    delete this->_idea;
	return ;
}

Dog & Dog::operator=(Dog const &rhs)
{
	this->_type = rhs._type;
	*(this->_idea) = *(rhs.get_brain());
	return (*this);
}

AAnimal & Dog::operator=(AAnimal const &rhs)
{
	this->_type = rhs.get_type();
	*(this->_idea) = *(rhs.get_brain());
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->get_type() << ": WOUF WOUF !!!" << std::endl;
	return ;
}

Brain	*Dog::get_brain()const
{
	return (this->_idea);
}