/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:05:59 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/23 23:09:23 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap`s default constructor is called. " << std::endl;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "Fragtrap`s " << name << " constructor is called. " << std::endl;
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "Fragtrap`s " << _name << " destructor is called. " << std::endl;
}

FragTrap::FragTrap(FragTrap& src)
{
    std::cout << "Fragtrap`s copy constructor is called. " << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src){
    std::cout << "Fragtrap`s assignation overloading. " << std::endl;
    this->ClapTrap::operator=(src);
    return (*this);
}

void    FragTrap::attack(std::string const &target)
{
    std::cout << "Fragtrap " << _name << " attcks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    this->_Hitpoints -= amount;
    std::cout << "Fragtrap " << _name << " took " << amount << " damages. " << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    this->_Hitpoints += amount;
    std::cout << "Fragtrap " << _name << " is repaired about " << amount << ", Repair complete!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Fragtrap " << _name << " does a HIGHFIVE~! " << std::endl;
}