/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:00:20 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 00:04:42 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void do_beSigned(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << form << std::endl;
	}
}

void do_action(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		std::cout << form << std::endl;
		bureaucrat.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	std::cout << "\ntry beSigned by wrong" << std::endl;
	do_beSigned(form, wrong);
	std::cout << "\ntry action with not signed form" << std::endl;
	do_action(form, correct);
	std::cout << "\ntry beSigned by correct" << std::endl;
	do_beSigned(form, correct);
	std::cout << "\ntry action with signed form by wrong" << std::endl;
	do_action(form, wrong);
	std::cout << "\ntry action with signed form by correct" << std::endl;
	do_action(form, correct);
}

int main()
{
	{
		Bureaucrat hojo("hojo", 1);
		Bureaucrat khancho("khancho", 150);
		ShrubberyCreationForm form1("Target");
		RobotomyRequestForm form2("Target");
		PresidentialPardonForm form3("Target");
		test_form(form1, hojo, khancho);
		test_form(form2, hojo, khancho);
		test_form(form3, hojo, khancho);
	}
	system("leaks Form");
	return 0;
}