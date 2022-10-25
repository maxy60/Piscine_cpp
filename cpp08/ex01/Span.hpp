/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:05:58 by msainton          #+#    #+#             */
/*   Updated: 2022/10/25 15:37:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int _N;
    std::vector<int> span;
public:
    Span();
    Span(unsigned int n);
    Span(Span const &src);
    Span &  operator=(Span const &rhs);
    ~Span();
    void    init(int n1, int n2);
    void    addNumber(int n);
    int     shortestSpan();
    int     longestSpan();
    class   SpanIsFull : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class   SpanIsTooShort : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

#endif