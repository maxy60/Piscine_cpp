/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:22:37 by msainton          #+#    #+#             */
/*   Updated: 2022/10/03 12:22:19 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
public:
	std::string _ideas[100];
    Brain();
    Brain(Brain const &src);
    Brain & operator=(Brain const &rhs);
    ~Brain();
};

#endif