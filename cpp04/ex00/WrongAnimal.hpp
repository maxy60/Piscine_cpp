/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:30:22 by msainton          #+#    #+#             */
/*   Updated: 2022/09/29 15:10:52 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal & operator=(WrongAnimal const &rhs);
	virtual ~WrongAnimal();
	const std::string	get_type() const;
	void	makeSound() const;
};

#endif
