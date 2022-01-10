/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:43:45 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/07 20:21:45 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    _weapon = NULL;
}

void    HumanB::attack()
{
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}


HumanB::~HumanB()
{  
}