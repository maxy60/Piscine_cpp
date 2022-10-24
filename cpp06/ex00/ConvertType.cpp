/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:58:44 by msainton          #+#    #+#             */
/*   Updated: 2022/10/24 19:16:00 by msainton         ###   ########.fr       */
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
    this->_str = rhs._str;
    this->_c = rhs._c;
    this->_d = rhs._d;
    this->_i = rhs._i;
    this->_f = rhs._f;
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
	if (!(*i) && strb.length() < 19)
	{
		int_convert();
		return ;
	}
	strtod(this->_str, &d);
	if (!(*d))
	{
		double_convert();
		return ;
	}
	int iter = 0;
	while (this->_str[iter])
		iter++;
	if (this->_str[iter -1] == 'f')
	{
		strb.erase(iter -1);
		_str = const_cast<char *>(strb.c_str());	
	}
	strtof(this->_str, &f);
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
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
	print();
}

void	ConvertType::int_convert()
{
    long tmp = atol(this->_str);
    std::cout << "char: ";
	if (tmp > CHAR_MAX || tmp < 32)
		std::cout << "Non displayable" << std::endl;
	else
    {
        this->_c = static_cast<char>(tmp);
		std::cout << "'" << this->_c << "'" << std::endl;
    }
    std::cout << "int: ";
    if (tmp > INT_MAX || tmp < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
    {
        this->_i = atoi(this->_str);
        std::cout << this->_i << std::endl;
    }
	this->_f = static_cast<float>(tmp);
    std::cout << "float: " << std::fixed << std::setprecision(1) << this->_f << "f" << std::endl;
    this->_d = static_cast<double>(tmp);
	std::cout << "double: " << std::fixed << std::setprecision(1) << this->_d << std::endl;

}

void	ConvertType::float_convert()
{
	this->_f = atof(this->_str);
	this->_c = static_cast<char>(this->_f);
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
	print();
}

void	ConvertType::double_convert()
{
	char	*endptr;
	this->_d = strtod(this->_str, &endptr);
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
	if (this->_d > INT_MAX || this->_d < INT_MIN || isnan(this->_d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << this->_f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << this->_d << std::endl;
}
