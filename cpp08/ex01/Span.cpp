/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:05:48 by msainton          #+#    #+#             */
/*   Updated: 2022/10/26 18:45:36 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
    std::vector<int>::iterator  it = tmp.begin();
    std::vector<int>::iterator ite = tmp.end();
    int tmp1 = *(it + 1) - *it;
    int tmp2;
    for (; it != ite -1; it++)
    {
        tmp2 = *(it + 1) - *it;
        if (tmp2 < tmp1)
            tmp1 = tmp2;
    }
    return tmp1;
}

int     Span::longestSpan()
{
    if (this->span.size() <= 1)
        throw(Span::SpanIsTooShort());
    return ((*max_element(this->span.begin(), this->span.end()) - *min_element(this->span.begin(), this->span.end())));
}

void    Span::init(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ( std::distance<std::vector<int>::iterator >(begin, end) > static_cast<int>(this->_N))
        throw(SpanIsFull());
    while (begin != end)
        span.push_back(*begin++);
}

std::vector<int> & Span::getvec(void)
{
    return (span);
}
