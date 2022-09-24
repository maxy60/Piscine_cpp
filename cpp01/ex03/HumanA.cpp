/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:19:49 by msainton          #+#    #+#             */
/*   Updated: 2022/09/15 18:10:29 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &my_weapon) : name(name), WeaponA(my_weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::setWeapon(Weapon my_weapon)
{
    this->WeaponA = my_weapon;
}

void    HumanA::attack()
{
    std::cout << name << " attcks with their " << this->WeaponA.getType() << std::endl;
}