/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:26:01 by msainton          #+#    #+#             */
/*   Updated: 2022/09/13 11:45:29 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name)
{
    int i;

    i = 0;
    Zombie *horde = new Zombie[n];
    
    while (i < n)
    {
        horde[i].set_name(name);
        i++;
    }
    return horde;
}