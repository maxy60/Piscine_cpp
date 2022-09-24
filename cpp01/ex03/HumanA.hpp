/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:19:52 by msainton          #+#    #+#             */
/*   Updated: 2022/09/15 18:18:13 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#endif
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      &WeaponA;
public:
    HumanA(std::string name, Weapon &my_weapon);
    ~HumanA();
    void    attack();
    void    setWeapon(Weapon my_weapon);
};
