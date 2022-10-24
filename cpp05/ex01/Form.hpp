/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:28:04 by msainton          #+#    #+#             */
/*   Updated: 2022/10/24 12:11:02 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool		_signed_form;
	const int	_grade_signed;
	const int	_exe_signed;
public:
	Form();
	Form(std::string name, int const gs, int const es);
	Form(Form const &src);
	Form & operator=(Form const &rhs);
	~Form();
	void	beSigned(Bureaucrat const &bur);
	std::string const	getName() const;
	bool				getSF() const;
	int					getGS() const;
	int					getES() const;
    void                setSF(bool signedF);

    
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
};

std::ostream 	&operator<<(std::ostream &o, Form const &src);

#endif