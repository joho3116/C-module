/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:21:39 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/31 18:12:37 by johokyoun        ###   ########.fr       */
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
    _value = (int)roundf((f * (1 << _fractionalBits)));
    /* 인자로 들어온 수를 << 연산을 통해 가수부의 공간을 마련해주면 된다.
    인자가 부동소수점인 경우, 쉬프트 연산이 불가능하기 때문에 이를 우회하여 표현해야하고,
    현재 고정소수점으로 저장할 클래스의 변수타입(_value)이 int형이기 때문에, roundf를 통해 반올림을 진행한다.

    */
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
    /* 먼저 고정소수점을 float로 형변환한 후, 고정소수점의 가수부 부분을 표현하기 위해 << 연산한 값을 되돌리면 된다.*/
}

int Fixed::toInt(void) const
{
    return (this->_value >> _fractionalBits);
    /* 고정소수점으로 변환했을 때 가수부 부분을 마련하기 위해 쉬프트 연산한 것을
    다시 원위치시킴*/
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
    /* Fixed 클래스의 << 연산은 고정소수점 값을 부동소수점으로 출력한다.*/
}