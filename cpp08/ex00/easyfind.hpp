/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:54:04 by msainton          #+#    #+#             */
/*   Updated: 2022/10/24 21:36:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
int    easyfind(T container, int n)
{
    typename T::const_iterator test;
    test = find(container.begin(), container.end(), n);
    if (container.end() == test)
        throw(0);
    return *test;
}

#endif