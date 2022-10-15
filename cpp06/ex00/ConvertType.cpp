/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:58:44 by msainton          #+#    #+#             */
/*   Updated: 2022/10/15 20:23:59 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertType.hpp"
#include <string>

ConvertType::ConvertType()
{
	std::cout << "ConvertType : Default constructor" << std::endl;
	return ;
}

ConvertType::ConvertType(char *str)
{
	std::cout << "ConvertType : constructor" << std::endl;
	this->_str = str;
	return ;
}

ConvertType::ConvertType(ConvertType const &src)
{
	std::cout << "ConvertType : Copy constructor" << std::endl;
	*this = src;
	return ;
}

ConvertType & ConvertType::operator=(ConvertType const &rhs)
{
	(void)rhs;
	return (*this);
}

ConvertType::~ConvertType()
{
	std::cout << "ConvertType : Destructor" << std::endl;
	return ;
}

void	ConvertType::Good_type()
{
	std::string strb = this->_str;
	char	*i;
	char	*f;
	char	*d;
	char	*tmp;
	
	if (strb.length() == 1 && !isdigit(this->_str[0]))
	{
		char_convert();
		return ;
	}
	long int_converted = strtol(_str, &i, 10);
	if (!(*i))
	{
		int_convert();
		return ;
	}
	double double_convert = strtod(_str, &d);
	if (!(*d))
	{
		double_convert();
		return ;
	}
	if (strb.back() == 'f')
		strb.back() = '\0';
	_str = const_cast<char *>(strb.c_str());
	float	float_convert = strtof(_str, &f);
	if (!(*f) || *f != 'f')
		float_convert();

	
}

