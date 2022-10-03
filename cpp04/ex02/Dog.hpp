/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:03:34 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 15:44:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain   *idea;
public:
	Dog();
	Dog(Dog const &src);
	Dog & operator=(AAnimal const &rhs);
	~Dog();
	void	makeSound(void) const;
	Brain	*get_brain()const;

};

#endif