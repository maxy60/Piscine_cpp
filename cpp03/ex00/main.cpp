/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:40 by msainton          #+#    #+#             */
/*   Updated: 2022/09/27 12:11:36 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap hero("le_gentil");
	ClapTrap le_gentil(hero);
	
	
	hero.attack("le mechant");
	hero.takeDamage(8);
	hero.beRepaired(2);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.beRepaired(100);
	hero.attack("le mechant");
	le_gentil.attack("le mechant");
	le_gentil.beRepaired(100);
	le_gentil.takeDamage(800);
	le_gentil.beRepaired(9000);
	le_gentil.attack("le mechant");
}