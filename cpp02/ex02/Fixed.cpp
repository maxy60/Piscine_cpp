/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:02:28 by msainton          #+#    #+#             */
/*   Updated: 2022/09/24 18:25:59 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(int const n)
{
	this->_nbr = n << this->_bits;
	return ;
}


Fixed::Fixed(float const f)
{
	this->_nbr = roundf(f * (float)(1 << this->_bits));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed &Fixed::operator=(Fixed const &src)
{
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

Fixed &Fixed::operator--()
{
	this->_nbr--;
	return(*this);
}

Fixed &Fixed::operator++()
{
	this->_nbr++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_nbr++;
	return(tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_nbr--;
	return(tmp);
}

Fixed  &Fixed::min(Fixed &one, Fixed &two)
{
	if (one.toFloat() < two.toFloat())
		return (one);
	else
		return (two);
}

Fixed  &Fixed::max(Fixed &one, Fixed &two)
{
	if (one.toFloat() < two.toFloat())
		return (two);
	else
		return (one);
}

Fixed  const &Fixed::max(Fixed const &one, Fixed const &two)
{
	if (one.toFloat() < two.toFloat())
		return (two);
	else
		return (one);
}

Fixed	const &Fixed::min(Fixed const &one, Fixed const &two)
{
	if (one.toFloat() < two.toFloat())
		return (one);
	else
		return (two);
}