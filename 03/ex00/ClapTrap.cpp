/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:05:05 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/31 18:33:37 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Claptrap`s default constructor is called. " << std::endl;
    _Hitpoints = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Claptrap`s " << name << " constructor is called. " << std::endl;
    this->_name = name;
    _Hitpoints = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Claptrap`s " << _name << " destructor is called. " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
    std::cout << "Claptrap`s copy constructor is called. " << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Claptrap`s assignation operator." << std::endl;
    this->_name = src._name;
    this->_Hitpoints = src._Hitpoints;
    this->_Energy_points = src._Energy_points;
    this->_Attack_damage = src._Attack_damage;
    return (*this);
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "Claptrap" << _name << " attacks " << target <<", causing " << this->_Attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_Hitpoints -= amount;
    std::cout << "Claptrap " << _name << " took " << amount << " damages." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_Hitpoints += amount;
    std::cout << "Claptrap " << _name << " is repaired about " << amount << ", Repair complete!" << std::endl;
}