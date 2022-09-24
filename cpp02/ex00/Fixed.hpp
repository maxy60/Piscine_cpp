/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:01:47 by msainton          #+#    #+#             */
/*   Updated: 2022/09/21 11:01:21 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int _nbr;
    static const int _bits = 8;
public:
    Fixed();
	Fixed(Fixed const &src);
    ~Fixed();
	Fixed &operator=(Fixed const &src);
	int	getRawBits() const;
    void	setRawBits(int const raw);
};

#endif
