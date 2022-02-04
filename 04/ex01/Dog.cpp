/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:01:48 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 22:54:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    this->brain = new Brain();
}


Dog::~Dog() {
    delete this->brain;
}

Dog::Dog(const Dog& src) : Animal(src){
    this->brain = new Brain(*src.getBrain());
}

Dog& Dog::operator=(const Dog& src) {
    if (this != &src)
    {
        this->~Dog();
        this->brain = new Brain(*src.getBrain());
        this->Animal::operator=(src);   
    }
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Bow Wow" << std::endl;
}

Brain *Dog::getBrain() const {
    return (this->brain);
}