/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:11:17 by msainton          #+#    #+#             */
/*   Updated: 2022/10/17 11:23:56 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURREAUCRAT_HPP
# define BURREAUCRAT_HPP
#include <iostream>
#include <stdexcept>


class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
public:
    Bureaucrat();
    Bureaucrat(int grade, std::string name);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat & operator=(Bureaucrat const &rhs);
    ~Bureaucrat();
    void    upGrade();
    void    downGrade();
    std::string const getName() const;
    int     getGrade() const;
    void    setGrade(int i);
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

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif