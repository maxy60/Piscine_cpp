/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:22:54 by msainton          #+#    #+#             */
/*   Updated: 2022/10/04 21:17:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	
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
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}
