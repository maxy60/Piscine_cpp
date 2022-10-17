/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:41:22 by msainton          #+#    #+#             */
/*   Updated: 2022/10/17 16:58:22 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data    my_data;
    Data    *my_databis;
    my_data.c = 'c';
    my_data.i = 1;
    std::cout << &my_data << " char = " << my_data.c << " int = " << my_data.i << std::endl;
    my_databis = deserialize(serialize(&my_data));
    std::cout << &my_databis << " bchar = " << my_databis->c << " bint = " << my_databis->i << std::endl;
}