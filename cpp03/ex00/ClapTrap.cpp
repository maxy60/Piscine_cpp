/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:29 by msainton          #+#    #+#             */
/*   Updated: 2022/09/26 19:26:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "copie constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
	
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rhs)
{
	
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Energy_points--;
	this->Hit_point += amount;
	std::cout << this->name << " is repaired" <<std::endl;
}