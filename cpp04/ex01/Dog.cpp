/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:03:37 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 19:32:13 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
    this->_idea = new Brain();
	std::cout << "Dog: Default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const &src) : Animal::Animal(src)
{
	*this = src;
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
	return (*this);
}

Animal & Dog::operator=(Animal const &rhs)
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