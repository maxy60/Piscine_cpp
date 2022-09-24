/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:18:34 by msainton          #+#    #+#             */
/*   Updated: 2022/09/15 18:18:52 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string&   getType();
    void    setType(std::string str);
};

#endif
