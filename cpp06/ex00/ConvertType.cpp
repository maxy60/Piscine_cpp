/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:58:44 by msainton          #+#    #+#             */
/*   Updated: 2022/10/16 12:58:17 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertType.hpp"

ConvertType::ConvertType()
{
	return ;
}

ConvertType::ConvertType(char *str)
{
	this->_str = str;
	return ;
}

ConvertType::ConvertType(ConvertType const &src)
{
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
	return ;
}

void	ConvertType::Good_type()
{
	std::string strb = this->_str;
	char	*i;
	char	*f;
	char	*d;

	if (strb.length() == 1 && !isdigit(this->_str[0]))
	{
		char_convert();
		return ;
	}
	strtol(_str, &i, 10);
	if (!(*i))
	{
		int_convert();
		return ;
	}
	strtod(_str, &d);
	if (!(*d))
	{
		double_convert();
		return ;
	}
	int iter = 0;
	while (_str[iter])
		iter++;
	if (_str[iter -1] == 'f')
	{
		strb.erase(iter -1);
		_str = const_cast<char *>(strb.c_str());	
	}
	strtof(_str, &f);
	if (!(*f))
	{
		float_convert();
		return ;
	}
	std::cout << "char: impossible" << std::endl;; 
	std::cout << "int: impossible" << std::endl; 
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	ConvertType::char_convert()
{
	this->_c = _str[0];
	this->_i = static_cast<int>(_c);
	this->_f = static_cast<float>(_c);
	this->_d = static_cast<double>(_c);
	print();
}

void	ConvertType::int_convert()
{
	this->_i = atoi(_str);
	this->_c = static_cast<char>(_i);
	this->_f = static_cast<float>(_i);
	this->_d = static_cast<double>(_i);
	print();
}

void	ConvertType::float_convert()
{
	this->_f = atof(_str);
	this->_c = static_cast<char>(_f);
	this->_i = static_cast<int>(_f);
	this->_d = static_cast<double>(_f);
	print();
}

void	ConvertType::double_convert()
{
	char	*endptr;
	this->_d = strtod(_str, &endptr);
	this->_i = static_cast<int>(_d);
	this->_f = static_cast<float>(_d);
	this->_c = static_cast<char>(_d);
	print();
}

void	ConvertType::print()
{
	std::cout << "char: "; 
	if (isnan(this->_d))
		std::cout << "impossible" << std::endl;
	else if (this->_i > CHAR_MAX || this->_i < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << this->_c << "'" << std::endl;
	std::cout << "int: "; 
	if (this->_i > INT_MAX || this->_i < INT_MIN || isnan(this->_d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_i << std::endl;
	std::cout << "float: " << this->_f << "f" << std::endl;
	std::cout << "double: " << this->_d << std::endl;
}
