/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:01:47 by msainton          #+#    #+#             */
/*   Updated: 2022/09/22 16:11:23 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <fstream>

class Fixed
{
private:
    int _nbr;
    static const int _bits = 8;
public:
    Fixed();
	Fixed(Fixed const &src);
	Fixed(int const n);
	Fixed(float const f);
    ~Fixed();
	float 	toFloat(void) const;
	int		toInt(void) const;
	Fixed 	&operator=(Fixed const &src);
	int		getRawBits() const;
    void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &src);

#endif
