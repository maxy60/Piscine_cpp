/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:36:37 by msainton          #+#    #+#             */
/*   Updated: 2022/10/19 17:23:39 by msainton         ###   ########.fr       */
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
