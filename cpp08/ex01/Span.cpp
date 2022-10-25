/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:05:48 by msainton          #+#    #+#             */
/*   Updated: 2022/10/25 14:25:54 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _N(0)
{
    return ;
}

Span::Span(unsigned int n) : _N(n)
{
    return ;
}

Span::Span(Span const &src)
{
    *this = src;
    return ;
}

Span    &Span::operator=(Span const &rhs)
{
    this->_N = rhs._N;
    return *this;
}

Span::~Span()
{
    return ;
}

const char *    Span::SpanIsFull::what() const throw()
{
    return ("Span is full");
}

const char *    Span::SpanIsTooShort::what() const throw()
{
    return ("Span is too short");
}

void    Span::addNumber(int n)
{
    try
    {
        if (this->span.size() == this->_N)
            throw(Span::SpanIsFull());
        this->span.push_back(n);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

/*int     Span::shortestSpan()
{
    if (this->span.size() <= 1)
        throw(Span::SpanIsTooShort());
    
}

int     Span::longestSpan()
{
        if (this->span.size() <= 1)
            throw(Span::SpanIsTooShort());
        std::vector<int> tmp = this->span;
}*/

/*void    Span::init(size_t n)
{
    
}*/