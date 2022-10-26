/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:51:16 by msainton          #+#    #+#             */
/*   Updated: 2022/10/25 10:00:36 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

const char *EndFind::what() const throw()
{
    return ("no occurrence of n on this container");
}

int main()
{
    
    try
    {
        std::vector<int> my_vector;
        my_vector.push_back(10);
        my_vector.push_back(10);
        my_vector.push_back(10);
        my_vector.push_back(42);
        my_vector.push_back(10);
        std::cout << easyfind(my_vector, 42) << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

        try
    {
        std::vector<int> my_vector;
        my_vector.push_back(10);
        my_vector.push_back(10);
        my_vector.push_back(10);
        my_vector.push_back(41);
        my_vector.push_back(10);
        std::cout << easyfind(my_vector, 42) << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}