/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:02:28 by msainton          #+#    #+#             */
/*   Updated: 2022/09/23 19:38:47 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	std::cout << "Default constuctor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = n << this->_bits;
	return ;
}


Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = roundf(f * (float)(1 << this->_bits));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "copy assignement operator called" << std::endl;
	this->_nbr = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	return(this->_nbr);
}

int	Fixed::toInt(void) const
{
	return (this->_nbr >> this->_bits);
}

float	Fixed::toFloat(void) const 
{
	return ((float)this->_nbr / (float)(1 << this->_bits));
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
	return ;
}

std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const &src)
{
	if (this->_nbr > src._nbr)
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const &src)
{
	if (this->_nbr < src._nbr)
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const &src)
{
	if (this->_nbr >= src._nbr)
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const &src)
{
	if (this->_nbr <= src._nbr)
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const &src)
{
	if (this->_nbr == src._nbr)
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const &src)
{
	if (this->_nbr != src._nbr)
		return true;
	return false;
}

Fixed	Fixed::operator+(Fixed const &src)
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &src)
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &src)
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &src)
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

