/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:04:40 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:19:49 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* WrongAnimal의 경우, 가상함수를 사용하지 않음으로써 WrongCat 클래스의 makeSound가 아닌
WrongAnimal 클래스의 함수가 동작

*/

WrongAnimal::WrongAnimal() {
	type = "Wrong Animal";
    std::cout << type << "default constructor is called. " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	this->type = src.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " destructor is called." << std::endl;
}

std::string const & WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal!!!" << std::endl;
}