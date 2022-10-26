/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:03:02 by msainton          #+#    #+#             */
/*   Updated: 2022/10/26 18:47:18 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.init(sp.getvec().begin(), sp.getvec().end());
        sp.addNumber(145);
        sp.addNumber(12);
        sp.addNumber(0);
        sp.addNumber(-1);
        sp.addNumber(80);
        sp.addNumber(108);
        int i = sp.longestSpan();
        std::cout << i << std::endl;
        int j = sp.shortestSpan();
        std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}