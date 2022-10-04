/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:40 by msainton          #+#    #+#             */
/*   Updated: 2022/10/04 14:23:50 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &src);
	virtual Animal & operator=(Animal const &rhs);
	virtual ~Animal();
	const std::string	get_type()const;
	virtual void	makeSound(void) const;
	virtual	Brain	*get_brain() const = 0;
};

#endif