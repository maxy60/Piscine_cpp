/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:05:48 by msainton          #+#    #+#             */
/*   Updated: 2022/10/25 20:13:48 by msainton         ###   ########.fr       */
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
   if (this->span.size() == this->_N)
        throw(Span::SpanIsFull());
    this->span.push_back(n);
}

int     Span::shortestSpan()
{
    if (this->span.size() <= 1)
        throw(Span::SpanIsTooShort());
    std::vector<int> tmp = this->span;
    sort(tmp.begin(), tmp.end());
    //return (*adjacent_difference(tmp.begin(), tmp.end(), ));
}

int     Span::longestSpan()
{
    if (this->span.size() <= 1)
        throw(Span::SpanIsTooShort());
    return ((*max_element(this->span.begin(), this->span.end()) - *min_element(this->span.begin(), this->span.end())));
}

void    Span::init(int n1, int n2)
{
    if ((n2 - n1) > static_cast<int>(this->_N))
        throw(SpanIsFull());
    while (n1 < n2)
        span.push_back(n1++);
}