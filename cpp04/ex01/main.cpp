/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:36:37 by msainton          #+#    #+#             */
/*   Updated: 2022/10/05 14:38:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *Animaux[5];
	
	for (int i = 0; i < 5; i++)
	{
		if (i <= 2)
    		Animaux[i] = new Dog();
		else
			Animaux[i] = new Cat();
	}
    
	Animaux[0]->makeSound();
	Animaux[1]->makeSound();
	Animaux[2]->makeSound();
	Animaux[3]->makeSound();
	Animaux[4]->makeSound();

	Brain *my_idea;
	my_idea = Animaux[0]->get_brain();
	my_idea->_ideas[0] = "test";
	my_idea->_ideas[1] = "other test";
	std::cout << Animaux[0]->get_type() << ": " << Animaux[0]->get_brain()->_ideas[0] << std::endl;
	std::cout << Animaux[0]->get_type() << ": " << Animaux[0]->get_brain()->_ideas[1] << std::endl;
	*(Animaux[1]) = *(Animaux[0]);
	std::cout << Animaux[1]->get_type() << ": " << Animaux[1]->get_brain()->_ideas[0] << std::endl;
	std::cout << Animaux[1]->get_type() << ": " << Animaux[1]->get_brain()->_ideas[1] << std::endl;
	for (int j = 0; j < 5; j++)
		delete Animaux[j];
}

/*int main()
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
}*/