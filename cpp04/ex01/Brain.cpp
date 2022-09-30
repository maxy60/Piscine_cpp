/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:22:54 by msainton          #+#    #+#             */
/*   Updated: 2022/09/30 11:58:45 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_ideas;
	std::cout << "Brain: Default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain: copie constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called" <<std::endl;
	return ;
}

Brain & Brain::operator=(Brain const &rhs)
{
	//this->_ideas = rhs._ideas;
	return (*this);
}
