/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:40 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 15:37:14 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(AAnimal const &src);
	virtual AAnimal & operator=(AAnimal const &rhs) = 0;
	virtual ~AAnimal() = 0;
	const std::string	get_type()const;
	virtual void	makeSound(void) const = 0;
	virtual	Brain	*get_brain() const = 0;
};

#endif