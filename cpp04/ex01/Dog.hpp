/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:03:34 by msainton          #+#    #+#             */
/*   Updated: 2022/09/30 11:58:05 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *idea;
public:
	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rhs);
	~Dog();
	void	makeSound(void) const;

};

#endif