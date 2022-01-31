/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:26:45 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/31 16:20:28 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap " << "default constructor is called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " destructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap " << name << " constructor is called." << std::endl;
	this->_name = name;
	ClapTrap::_name = name.append("_clap_name");
	this->FragTrap::_Hitpoints = 100;
	this->ScavTrap::_Energy_points = 50;
	this->FragTrap::_Attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap& c) {
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
	*this = c;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& c) {
	std::cout << "DiamondTrap assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	this->_name = c._name;
	return (*this);
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	std::cout << "DiamondTrap " << this->_name << " took " << amount << " damages." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "DiamondTrap " << this->_name << " is repaired " << amount << ". Repaired complete!" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name is " << this->_name << ". ClapTrap Name is " << this->ClapTrap::_name << std::endl;
}