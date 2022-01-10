/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:43:30 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/03 16:20:12 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType()
{
    return (_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon(){    
}