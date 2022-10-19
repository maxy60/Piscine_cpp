/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:26:13 by msainton          #+#    #+#             */
/*   Updated: 2022/10/19 15:25:55 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
	this->_Hit_point = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_Hit_point = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "ScavTrap: constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	this->_Hit_point = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	*this = src;
	std::cout << "ScavTrap: copie constructor called" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_Hit_point = rhs._Hit_point;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_Energy_points == 0)
	{
		std::cout << "ScavTrap can't attack because ClapTrap don't have Energy point" << std::endl;
		return ;
	}
	if (this->_Hit_point == 0)
	{
		std::cout << "ScavTrap can't attack because ClapTrap is dead(don't have Hit point)" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
	this->_Energy_points--;
	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " came into Gatekeeper mode" << std::endl;
	return ;
}
