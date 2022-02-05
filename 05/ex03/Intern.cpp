/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:46:26 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:47:51 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	return (*this);
	(void)other;
}

Form* Intern::makeShrubberyForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotoForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string name, std::string target) {
	Form *tmp = NULL;

	std::string names[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

	Form*	(Intern::* funcPtr[3])(std::string target) = {
		&Intern::makeShrubberyForm,
		&Intern::makeRobotoForm,
		&Intern::makePresidentForm
	};

	for (int i = 0 ; i < 3 ; i++) {
		if (name.compare(names[i]) == 0)
		{
			tmp = (this->*funcPtr[i])(target);
			std::cout << "Intern creates " << *tmp << std::endl;
			return (tmp);
		}
	}

	throw NoNameException();
	return (tmp);
}