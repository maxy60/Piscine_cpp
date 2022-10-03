/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:22:22 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 18:52:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *_idea;
public:
	Cat();
	Cat(Cat const &src);
	Cat & operator=(Cat const &rhs);
	Animal & operator=(Animal const &rhs);
	~Cat();
	void	makeSound(void) const;
	Brain	*get_brain()const;
};

#endif