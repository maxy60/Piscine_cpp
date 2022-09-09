/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:07:49 by msainton          #+#    #+#             */
/*   Updated: 2022/06/24 19:01:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int argc, char **argv)
{
    int count;
    int i;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (count = 1; count < argc; count++)
    {
        i = 0;
        while (argv[count][i])
        {
            argv[count][i] = toupper(argv[count][i]);
            i++;
        }
        std::cout << argv[count];
    }
    std::cout << std::endl;
    return 0;
}