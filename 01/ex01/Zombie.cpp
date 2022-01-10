/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:00:47 by johokyoun         #+#    #+#             */
/*   Updated: 2021/12/22 22:07:19 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie()
{
    std::cout << "<" << _name << "> is dead." << std::endl;
}