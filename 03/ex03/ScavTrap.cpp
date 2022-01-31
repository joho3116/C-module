/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:26:20 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/23 23:09:29 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap`s default constructor is called. " << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "Scavtrap`s " << name << " constructor is called. " << std::endl;
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scavtrap`s " << _name << " destructor is called. " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& src)
{
    std::cout << "Scavtrap`s copy constructor is called. " << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src){
    std::cout << "Scavtrap`s assignation overloading. " << std::endl;
    this->ClapTrap::operator=(src);
    return (*this);
}

void    ScavTrap::attack(std::string const &target)
{
    std::cout << "Scavtrap " << _name << " attcks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    this->_Hitpoints -= amount;
    std::cout << "Scavtrap " << _name << " took " << amount << " damages. " << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    this->_Hitpoints += amount;
    std::cout << "Scavtrap " << _name << " is repaired about " << amount << ", Repair complete!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << _name << " have enterred in Gate keeper mode. " << std::endl;
}