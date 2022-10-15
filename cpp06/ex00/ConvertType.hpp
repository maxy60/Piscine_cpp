/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:58:38 by msainton          #+#    #+#             */
/*   Updated: 2022/10/15 19:55:02 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ConvertType
{
private:
	char	*_str;
	char	_c;
	int		_i;
	float	_f;
	double	_d;
public:
	ConvertType();
	ConvertType(char *str);
	ConvertType(ConvertType const &src);
	ConvertType	& operator=(ConvertType const &rhs);
	~ConvertType();
	void	Good_type();
	
	
};

