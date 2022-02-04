/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:01:48 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 14:46:51 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
}

Dog::~Dog() {
}

Dog::Dog(const Dog& src) {
    *this = src;
}

Dog& Dog::operator=(const Dog& src) {
    this->Animal::operator=(src);
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Bow Wow" << std::endl;
}