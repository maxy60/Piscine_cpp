/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:50:51 by msainton          #+#    #+#             */
/*   Updated: 2022/10/26 14:24:40 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>

template<class T, class C = std::deque<T> >
class MutantStack : public std::stack< T, C >
{
public:
    MutantStack();
    MutantStack(MutantStack const &src);
    MutantStack  & operator=(MutantStack const &rhs);
    ~MutantStack();
    typedef typename C::iterator iterator;
    iterator  begin()
    {
        return (this->c.begin());
    }
    iterator  end()
    {
        return (this->c.end());
    }
};


template<class T, class C>
MutantStack<T, C>::MutantStack()
{
}

template<class T, class C>
MutantStack<T, C>::~MutantStack()
{
}

template<class T, class C>
MutantStack<T, C>::MutantStack(MutantStack<T, C> const &src)
{
    *this = src;
}

template<class T, class C>
MutantStack<T, C> & MutantStack<T, C>::operator=(MutantStack<T, C> const &rhs)
{
    this->c = rhs.c;
    return *this;
}


#endif