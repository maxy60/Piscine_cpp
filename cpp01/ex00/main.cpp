/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:22:20 by msainton          #+#    #+#             */
/*   Updated: 2022/10/07 22:26:43 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *on_heap = newZombie("on heap ");
	randomChump("on stack ");

    on_heap->announce();
    delete on_heap;
    return 0;
}