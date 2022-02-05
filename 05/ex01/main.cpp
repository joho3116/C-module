/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:00:20 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 00:49:39 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Bureaucrat hojo("hojo", 3);
		Bureaucrat khancho("khancho", 1);
		Form form("CPP_05", 2, 5);

		std::cout << hojo << std::endl;
		std::cout << khancho << std::endl;
		std::cout << form << std::endl;

		hojo.signForm(form);
		std::cout << form << std::endl;
		hojo.signForm(form);
		std::cout << form << std::endl;
	}

	return (0);
}