/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:25:34 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:50:44 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    const std::string ideas [] = {
        "happy", "sad", "hungry", "sleepy"
    };
    std::cout << "Brain constructor is called." << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
        std::cout << " " << this->ideas[i];
    }
    std::cout << std::endl;
}

Brain::Brain(Brain const &src)
{
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = src.getIdea(i);
}

Brain &Brain::operator=(Brain const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = src.getIdea(i);
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain destructor is called. " << std::endl;
    for (int i = 0; i < 100; ++i)
        std::cout << " " << this->ideas[i];
    std::cout << std::endl;
}

std::string const &Brain::getIdea(int i) const {
    return (this->ideas[i]);
}