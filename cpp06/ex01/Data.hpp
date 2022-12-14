/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:43:16 by msainton          #+#    #+#             */
/*   Updated: 2022/10/17 16:37:19 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
#include <iostream>
#include <stdint.h>

struct Data
{
	int i;
    char c;
};

uintptr_t serialize(Data *ptr);
Data	*deserialize(uintptr_t raw);

#endif