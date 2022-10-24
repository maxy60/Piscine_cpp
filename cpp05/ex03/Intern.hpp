/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:04:38 by msainton          #+#    #+#             */
/*   Updated: 2022/10/24 14:11:21 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	AForm *robotomy(std::string target);
	AForm *shrubbery(std::string target);
	AForm *presidential(std::string target);
public:
	Intern();
	Intern(Intern const &src);
	Intern	& operator=(Intern const &rhs);
	~Intern();
	AForm *makeForm(std::string name, std::string target);
    class   FormDoesntExist : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

#endif