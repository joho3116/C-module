/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:21:39 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/12 17:02:42 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor is called." << std::endl;
    _value = 0;
}

Fixed::Fixed(const int c)
{
    std::cout << "Int constructor is called." << std::endl;
    _value = c << _fractionalBits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor is called." << std::endl;
    _value = (int)roundf((f * (1 << this->_fractionalBits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor is called. " << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor is called." << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
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

float Fixed::toFloat(void) const 
{
    return ((float)this->_value / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}