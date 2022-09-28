/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:36:37 by msainton          #+#    #+#             */
/*   Updated: 2022/09/28 15:46:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	*Tupac = new Dog();
	Animal	*Kimy = new Cat();
	Animal	*Murloc = new Animal();


	Tupac->makeSound();
	Kimy->makeSound();
	Murloc->makeSound();

	delete Tupac;
	delete Kimy;
	delete Murloc;
	return 0;
}