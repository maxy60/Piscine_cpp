/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:22:22 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 15:43:22 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain   *idea;
public:
	Cat();
	Cat(Cat const &src);
	Cat & operator=(AAnimal const &rhs);
	~Cat();
	void	makeSound(void) const;
	Brain	*get_brain()const;
};

#endif