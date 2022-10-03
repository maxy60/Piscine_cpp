/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:03:34 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 19:15:33 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *_idea;
public:
	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rhs);
	Animal & operator=(Animal const &rhs);
	~Dog();
	void	makeSound(void) const;
	Brain	*get_brain()const;

};

#endif