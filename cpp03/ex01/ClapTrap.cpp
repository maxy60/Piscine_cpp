/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:29 by msainton          #+#    #+#             */
/*   Updated: 2022/09/27 15:03:20 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default_name"), _Hit_point(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hit_point(10), _Energy_points(10), _Attack_damage(0)
{
	this->_name = name;
	std::cout << "ClapTrap: constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name)
{
	*this = src;
	std::cout << "ClapTrap copie constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hit_point = rhs._Hit_point;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_Energy_points == 0)
	{
		std::cout << "ClapTrap can't attack because ClapTrap don't have Energy point" << std::endl;
		return ;
	}
	if (this->_Hit_point == 0)
	{
		std::cout << "ClapTrap can't attack because ClapTrap is dead(don't have Hit point)" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
	this->_Energy_points--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " take " << amount << " damage" << std::endl;
	if (this->_Hit_point > amount)
		this->_Hit_point -= amount;
	else
	{
		this->_Hit_point = 0;
		std::cout << this->_name << " is dead" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_points == 0)
	{
		std::cout << "can't be repaired because ClapTrap don't have Energy point" << std::endl;
		return ;
	}
	if (this->_Hit_point == 0)
	{
		std::cout << "can't be repaired because ClapTrap is dead(don't have Hit point)" << std::endl;
		return ;
	}
	this->_Energy_points--;
	this->_Hit_point += amount;
	std::cout << this->_name << " is repaired (" << this->_Hit_point << ")" << std::endl;
	return ;
}