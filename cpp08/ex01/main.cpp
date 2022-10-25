/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:03:02 by msainton          #+#    #+#             */
/*   Updated: 2022/10/25 19:35:13 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(10000);
        //sp.init(0, 500);
        sp.addNumber(10);
        sp.addNumber(12);
        sp.addNumber(15);
        sp.addNumber(50);
        sp.addNumber(80);
        sp.addNumber(108);
        int i = sp.longestSpan();
        int j = sp.shortestSpan();
        std::cout << i << std::endl;
        std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}