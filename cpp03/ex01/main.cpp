/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:33:11 by msainton          #+#    #+#             */
/*   Updated: 2022/09/28 12:16:36 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap hero("le_gentil");
	ScavTrap le_gentil(hero);
	
	
	hero.attack("le mechant");
	hero.takeDamage(8);
	hero.beRepaired(2);
	for (int i = 0; i < 50; i++)
		hero.beRepaired(100);
	hero.attack("le mechant");
	hero.guardGate();
	le_gentil.attack("le mechant");
	le_gentil.beRepaired(100);
	le_gentil.takeDamage(800);
	le_gentil.beRepaired(9000);
	le_gentil.attack("le mechant");
}