/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:58:07 by msainton          #+#    #+#             */
/*   Updated: 2022/10/20 13:01:10 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_HPP
# define TEMP_HPP

template< typename T >
T   max(T const & x, T const & y)
{
    return ( x>y ? x : y);
}

template< typename T >
T   min(T const & x, T const & y)
{
    return ( x<y ? x : y);
}

template< typename T >
void swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

#endif