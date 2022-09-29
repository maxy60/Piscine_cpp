/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:36:37 by msainton          #+#    #+#             */
/*   Updated: 2022/09/29 15:00:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	*Murloc = new Animal();
	Animal	*Tupac = new Dog();
	Animal	*Kimy = new Cat();
	WrongAnimal	*meta = new WrongAnimal();
	WrongAnimal *i = new WrongCat();


	std::cout << Tupac->get_type() << " " << std::endl;
	std::cout << Kimy->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;


	Tupac->makeSound();
	Kimy->makeSound();
	Murloc->makeSound();
	meta->makeSound();
	i->makeSound();

	delete Murloc;
	delete Tupac;
	delete Kimy;
	delete meta;
	delete i;
	return 0;
}