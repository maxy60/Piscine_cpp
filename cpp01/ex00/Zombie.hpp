/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:22:48 by msainton          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2022/10/07 22:26:49 by msainton         ###   ########.fr       */
=======
/*   Updated: 2022/10/08 16:02:34 by msainton         ###   ########.fr       */
>>>>>>> Stashed changes
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
    Zombie(std::string str);
    ~Zombie();
    void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
int     main();

#endif
