/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:33:11 by msainton          #+#    #+#             */
/*   Updated: 2022/09/28 12:27:14 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap hero("le_gentil");
	FragTrap le_gentil(hero);
	
	
	hero.attack("le mechant");
	hero.takeDamage(8);
	hero.beRepaired(2);
	for (int i = 0; i < 100; i++)
		hero.beRepaired(30);
	hero.attack("le mechant");
	hero.highFiveGuys();
	le_gentil.attack("le mechant");
	le_gentil.beRepaired(100);
	le_gentil.takeDamage(800);
	le_gentil.beRepaired(9000);
	le_gentil.attack("le mechant");
	return 0;
}