/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:22:48 by msainton          #+#    #+#             */
/*   Updated: 2022/09/09 19:24:55 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void    announce(void);
};

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}
