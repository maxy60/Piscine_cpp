/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:19:28 by msainton          #+#    #+#             */
/*   Updated: 2022/10/21 16:58:05 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP


template< typename T >
class Array
{
private:
    T   *_tab;
public:
    Array();
    Array(unsigned int n);
    ~Array();
};

template< typename T>
Array<T>::Array()
{
    _tab[] = new [] T;
}

template< typename T>
Array<T>::Array(unsigned int n)
{
    _tab = 
}

template< typename T>
Array<T>::~Array()
{
}


#endif