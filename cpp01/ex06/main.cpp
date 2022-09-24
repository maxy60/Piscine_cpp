/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:50:46 by msainton          #+#    #+#             */
/*   Updated: 2022/09/19 14:55:15 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "wrong number of arg" << std::endl;
        return 0;
    }
    Harl my_Harl;
    my_Harl.complain(argv[1]);
    
}