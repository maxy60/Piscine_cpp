/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:27:37 by msainton          #+#    #+#             */
/*   Updated: 2022/10/15 18:15:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ConvertType.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Wrong number of arg" << std::endl;
		return (0);
	}
	else
	{
		ConvertType coucou(av[1]);
		coucou.Good_type();
	}
	
}