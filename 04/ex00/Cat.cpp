/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:50:15 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 15:28:03 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
}

Cat::~Cat() {
}

Cat::Cat(const Cat& src) {
    *this = src;
}

Cat& Cat::operator=(const Cat& src) {
    this->Animal::operator=(src);
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}