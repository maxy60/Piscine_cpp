/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:25:08 by msainton          #+#    #+#             */
/*   Updated: 2022/10/11 15:45:24 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYRQUESTFORM_HPP
# define ROBOTOMYRQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();
	void	beExec() const;
	std::string getTarget() const;
};

#endif