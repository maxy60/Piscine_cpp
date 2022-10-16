/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:55:52 by msainton          #+#    #+#             */
/*   Updated: 2022/10/16 21:04:11 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int i;
};

uintptr_t serialize(Data *ptr)
{
	return (static_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	
}