/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:08:34 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/31 23:25:51 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    this->type = "Animal";
    std::cout << "Animal default constructor is called. " << std::endl;
}

Animal::Animal(std::string type) {
    this->type = type;
    std::cout << this->type << " constructor is called." << std::endl;
}

Animal::Animal(const Animal& src) {
    *this = src;
}

Animal::~Animal() {
    std::cout << this->type << " destructor is called. " << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
    this->type = src.getType();
    return (*this);
}

std::string const &Animal::getType() const {
    return (this->type);
}

void Animal::makeSound() const {
    std::cout << "BRRRRRRRRR" << std::endl;
}