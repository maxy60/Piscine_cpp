/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:19:28 by msainton          #+#    #+#             */
/*   Updated: 2022/10/23 11:33:02 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template< typename T >
class Array
{
private:
    T   *_tab;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    Array(Array const &src);
    Array  & operator=(Array const &rhs);
    T   *getArray() const;
    ~Array();
};

template< typename T>
Array<T>::Array()
{
    std::cout << "Default constructor called" << std::endl;
    this->_tab = NULL;
    this->_size = 0;
}

template< typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "constructor called" << std::endl;
    this->_size = n;
    if (n <= 0)
        _tab = NULL;
    _tab = new	T[n];
}

template< typename T>
Array<T>::~Array()
{
    delete [] _tab;
    std::cout << "destructor called" << std::endl;
}

template< typename T>
Array<T>::Array(Array<T> const &src)
{
    *this = src;
}

template< typename T>
Array<T> & Array<T>::operator=(Array<T> const &rhs)
{
    if (this->_size > 0)
    {
        rhs.getArray() = new T[this->_size];
        this->_tab = rhs.getArray();
    }
    else
        rhs.getArray() = NULL;
    this->_size = rhs._size;
    return *this;
}

template< typename T>
T   *Array<T>::getArray() const
{
    return (this->_tab);
}

#endif