/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:46:34 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:47:31 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	~Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);

	Form *makeShrubberyForm(std::string target);
	Form *makeRobotoForm(std::string target);
	Form *makePresidentForm(std::string target);
	Form *makeForm(std::string name, std::string target);

	class NoNameException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("No Form match the name.");
			}
	};
};

#endif