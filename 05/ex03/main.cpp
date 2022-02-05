/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:00:20 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:50:37 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
	std::cout << std::endl;
}

int main()
{
	{
		srand(time(NULL));
		Bureaucrat hojo("hojo", 1);
		Bureaucrat wrong("wrong", 150);
		Intern intern;
		Form *form;
		try {
			form = intern.makeForm("ShrubberyCreation", "target");
			test_form(*form, hojo, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("RobotomyRequest", "target");
			test_form(*form, hojo, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("PresidentialPardon", "target");
			test_form(*form, hojo, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("WrongName", "target");
			test_form(*form, hojo, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	system("leaks Bureaucrat");
	return 0;
}