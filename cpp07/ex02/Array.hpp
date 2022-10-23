/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:19:28 by msainton          #+#    #+#             */
/*   Updated: 2022/10/23 21:30:52 by msainton         ###   ########.fr       */
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
    Array   & operator=(Array const &rhs);
    T       &operator[](int n);
    unsigned int size();
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
        this->_tab = NULL;
    this->_tab = new	T[n];
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
    if (src._size > 0)
     {
         this->_tab = new T[src._size];
         for (unsigned int i = 0; i < src._size; i++)
             this->_tab[i] = src._tab[i];
     }
     else
         this->_tab = NULL;
     this->_size = src._size;
}

template< typename T>
Array<T> & Array<T>::operator=(Array<T> const &rhs)
{   
     if (this->_tab)
         delete [] this->_tab; 
     if (rhs._size > 0)
     {
         this->_tab = new T[rhs._size];
         for (unsigned int i = 0; i < rhs._size; i++)
             this->_tab[i] = rhs._tab[i];
     }
     else
         this->_tab = NULL;
     this->_size = rhs._size;
     return *this;
}

class InvalidArray : public std::exception
{
public:
    virtual const char *what() const throw();
};

const char *InvalidArray::what() const throw()
{
    
    return ("invalide size");
}

template< typename T>
T    &Array<T>::operator[](int n)
{
   
    if (n < 0 || static_cast<int>(this->_size) -1 < n || _tab == NULL)
        throw(InvalidArray());
    return (this->_tab[n]);
}

template< typename T>
unsigned int Array<T>::size()
{
    unsigned int const value = this->_size;
    return (value);
}

#endif