/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:13:58 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 22:57:59 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || strcmp(argv[1], "") == 0) {
		std::cout << "Error : argument." << std::endl;
		return (-1);
	}
	ScalarConverter converter(argv[1]);
	std::cout << converter << std::endl;
	return (0);
}