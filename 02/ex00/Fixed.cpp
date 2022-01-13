/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:21:39 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/11 22:55:57 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor is called." << std::endl;
    _value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor is called. " << std::endl;
}

Fixed::Fixed(Fixed& src)
{
    std::cout << "Copy constructor is called." << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(Fixed& src)
{
    std::cout << "Assignation operator is called." << std::endl;
    this->_value = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "GetRawBits function is called. " << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const num)
{
    _value = num;
}