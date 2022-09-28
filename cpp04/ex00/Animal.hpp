/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:40 by msainton          #+#    #+#             */
/*   Updated: 2022/09/28 15:41:42 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &src);
	Animal & operator=(Animal const &rhs);
	virtual ~Animal();
	const std::string	get_type()const;
	virtual void	makeSound(void) const;
};

#endif