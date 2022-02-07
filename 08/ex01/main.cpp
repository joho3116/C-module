/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:53:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 16:46:50 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
Span sp = Span(5);
Span sps = Span(203401);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);

std::cout << "=======Basic case =======" << std::endl;
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

std::cout << "==========Exception=========" << std::endl;
Span forExcept = Span(5);
std::cout << "-------Emtpy Vector ----------" << std::endl;
try
{
    std::cout << forExcept.shortestSpan() <<std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "-------1 element in Vector ----------" << std::endl;
try
{
    forExcept.addNumber(1);
    std::cout <<forExcept.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "-----------over insert -----------" << std::endl;
try
{
    forExcept.addNumber(2);
    forExcept.addNumber(3);
    forExcept.addNumber(4);
    forExcept.addNumber(5);
    forExcept.addNumber(6);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

std::cout << "=======more than 10000 case =======" << std::endl;

sps.addNumbers(23412);

std::cout << sps.shortestSpan() << std::endl;
std::cout << sps.longestSpan() << std::endl;
}