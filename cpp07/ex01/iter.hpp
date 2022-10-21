/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:43:58 by msainton          #+#    #+#             */
/*   Updated: 2022/10/21 12:11:09 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void    print(T &t)
{
    std::cout << t << std::endl;
}

template< typename T >
void    iter(T *tab, size_t size, void  (*func)(T &t))
{
    for (size_t i = 0; i < size; i++)
    {
        func(tab[i]);
    }
    return ;
}

#endif