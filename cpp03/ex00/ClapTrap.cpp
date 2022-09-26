/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:29 by msainton          #+#    #+#             */
/*   Updated: 2022/09/26 20:06:43 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "copie constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rhs)
{
	ClapTrap tmp;
	tmp = rhs;
	return (tmp);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points == 0)
	{
		std::cout << "can't attack because you don't have Energy point" << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_points--;
	
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << "take " << amount << " damage" << std::endl;
	this->Hit_point -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Energy_points--;
	this->Hit_point += amount;
	std::cout << this->name << " is repaired (" << this->Hit_point << ")" << std::endl;
	return ;
}