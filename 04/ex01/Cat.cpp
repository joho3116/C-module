/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:50:15 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 22:54:17 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    this->brain = new Brain();
}


Cat::~Cat() {
    delete this->brain;
}

Cat::Cat(const Cat& src) : Animal(src){
    this->brain = new Brain(*src.getBrain());
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src)
    {
        this->~Cat();
        this->brain = new Brain(*src.getBrain());
        this->Animal::operator=(src);   
    }
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}

Brain *Cat::getBrain() const {
    return (this->brain);
}