/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:00:20 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 17:20:08 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat *input_info()
{
	std::string name;
	int grade;

	try
	{
		std::cout << "name : ";
		std::cin >> name;
		std::cout << "grade : ";
		std::cin >> grade;
		return new Bureaucrat(name, grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return input_info();
	}
}

int main()
{
	{
		Bureaucrat *b = input_info();

		std::cout << *b << std::endl;
		try {
            b->decrementGrade(2);
            std::cout << *b << std::endl;
			b->incrementGrade(3);
			std::cout << *b << std::endl;
			b->incrementGrade();
			std::cout << *b << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete b;
	}
	return (0);
}
/* try : 예외가 발생할만한 상황, 예외가 발생하지 않는다면 try ~ catch문이 없는 것과 동일하게 동작
catch : 예외게 발생한 경우 동작

try에서 예외가 발생한 경우, catch절에 상황을 전달하기 위한 것이 throw문


*/