/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:43:06 by msainton          #+#    #+#             */
/*   Updated: 2022/09/13 11:47:44 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << this->name << "a Zombie is create" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie will be destroy : " << this->name << std::endl;
}

void    Zombie::set_name(std::string str)
{
    this->name = str;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}