/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:40 by msainton          #+#    #+#             */
/*   Updated: 2022/09/26 19:57:54 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap le_gentil("le_gentil");
	ClapTrap le_mechant("le_mechant");
	
	le_mechant.attack("le_gentil");
	
}