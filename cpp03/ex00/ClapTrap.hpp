/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:15 by msainton          #+#    #+#             */
/*   Updated: 2022/09/26 19:24:06 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int Hit_point = 10;
	unsigned int Energy_points = 10;
	unsigned int Attack_damage = 0;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap &	operator=(ClapTrap const &rhs);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
