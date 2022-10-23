/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:28:04 by msainton          #+#    #+#             */
/*   Updated: 2022/10/23 12:38:49 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string const _name;
	bool		_signed_form;
	int			_grade_signed;
	int			_exe_signed;
public:
	AForm();
	AForm(std::string name, int const gs, int const es);
	AForm(AForm const &src);
	virtual AForm & operator=(AForm const &rhs);
	virtual ~AForm() = 0;
	void	beSigned(Bureaucrat const &bur);
	void	execute(Bureaucrat const &executor) const;
	virtual void	beExec() const = 0;
	std::string const	getName() const;
	bool				getSF() const;
	int					getGS() const;
	int					getES() const;
	class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
	class IsNotSigned : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
	class ExecutorCantSigned : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream 	&operator<<(std::ostream &o, AForm const &src);

#endif