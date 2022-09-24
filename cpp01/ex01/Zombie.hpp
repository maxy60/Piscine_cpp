/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:22:48 by msainton          #+#    #+#             */
/*   Updated: 2022/09/15 18:19:57 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void	set_name(std::string str);
    void	announce(void);
};

Zombie  *zombieHorde(int n, std::string name);
int     main();

#endif
