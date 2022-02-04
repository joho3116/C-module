/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:10:00 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:24:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "Wrong Cat";
    std::cout << type << "default constructor is called. " << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	this->type = src.getType();
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << type << " destructor is called." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Cat Cat" << std::endl;
}