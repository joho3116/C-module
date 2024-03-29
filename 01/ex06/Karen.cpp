/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:47:46 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/10 20:52:51 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void    Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I just love it!" << std::endl;
}

void	Karen::info() 
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl << "You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning() 
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error() 
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Karen::* funcPtr[4])(void) = 
    {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    for (int i = 0; i < 4; i++)
    {
        if (level.compare(levels[i]) == 0)
        {
            (this->*funcPtr[i])();
            return ;
        }
    }
    return ;
}