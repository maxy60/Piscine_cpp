/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:19:56 by msainton          #+#    #+#             */
/*   Updated: 2022/09/15 18:59:04 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &my_weapon)
{
    this->_weaponB = &my_weapon;
}

void    HumanB::attack()
{
    std::cout << name << " attcks with their " << this->_weaponB->getType() << std::endl;
}