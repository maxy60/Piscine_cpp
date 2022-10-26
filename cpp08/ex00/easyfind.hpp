/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:54:04 by msainton          #+#    #+#             */
/*   Updated: 2022/10/26 18:33:47 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class EndFind : public std::exception
{
    public:
        virtual const char *what() const throw();
};

template<typename T>
int  const &  easyfind(T container, int n)
{
    typename T::const_iterator test;
    test = find(container.begin(), container.end(), n);
    if (container.end() == test)
        throw(EndFind());
    return *test;
}

#endif