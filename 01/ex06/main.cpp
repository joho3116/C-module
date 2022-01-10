/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:32:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/10 21:01:47 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Error." << std::endl;
        return (1);
    }
    Karen karen;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4; ++i)
    {
        if (argv[1] == levels[i])
            break ;
    }
    switch (i)
    {
        case DEBUG:
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("DEBUG");
        case INFO:
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("INFO");
        case WARNING:
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("WARNING");
        case ERROR:
            std::cout << "[ ERROR ]" << std::endl;;
            karen.complain("ERROR");
        break ;
        default:
            std::cout << "[ Probably complaning about insignificant problems ]" << std::endl;
        break;
    }
    return (0);
}