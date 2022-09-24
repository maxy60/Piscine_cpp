/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:42:36 by msainton          #+#    #+#             */
/*   Updated: 2022/09/13 11:50:32 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
	Zombie  *my_horde = zombieHorde(5, "Foo");

	for (int i = 0; i < 5; i++)
		my_horde[i].announce();
	delete [] my_horde;
    return 0;
}