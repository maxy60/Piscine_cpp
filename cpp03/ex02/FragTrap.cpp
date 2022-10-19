/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:21:36 by msainton          #+#    #+#             */
/*   Updated: 2022/10/18 14:53:42 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
	this->_Hit_point = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Hit_point = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap: constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	this->_Hit_point = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	*this = src;
	std::cout << "FragTrap: copie constructor called" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hit_point = rhs._Hit_point;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
	return ;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << this->_name << " man do you want a high five ?" << std::endl;
	return ;
}