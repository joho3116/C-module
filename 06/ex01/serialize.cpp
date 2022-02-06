/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:29:12 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 20:02:27 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data::Data() : _str("NULL"), _i(0), _d(0.0), _f(0.0){
}

Data::Data(const std::string& str, int i, double d, float f)
{
    this->_str = str;
    this->_i = i;
    this->_d = d;
    this->_f = f;
}

Data::Data(const Data& src)
{
    *this = src;
}

Data::~Data(){
}

Data& Data::operator=(const Data& src)
{
    if (this != &src)
    {
        this->_str = src.getStr();
        this->_i = src.getInt();
        this->_d = src.getDouble();
        this->_f = src.getDouble();
    }
    return (*this);
}

const std::string& Data::getStr() const {
    return (this->_str);
}

const int& Data::getInt() const {
    return (this->_i);
}

const double& Data::getDouble() const {
    return (this->_d);
}

const float& Data::getFloat() const {
    return (this->_f);
}

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

/* reinterpret_cast<바꿀 타입>(대상)

임의의 포인터 타입끼리 변환을 허용하는 캐스트 연산자
대상을 바꿀타입으로 비트단위로 바꾸는 것

*/

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

std::ostream& operator<<(std::ostream& out, const Data& ptr)
{
    out << "Str : " << ptr.getStr() << std::endl
        << "Int : " << ptr.getInt() << std::endl
        << "Double : " << ptr.getDouble() << std::endl
        << "Float : " << ptr.getFloat() << std:: endl;
    return (out); 
}

void printRaw(uintptr_t raw)
{
    Data *tmp = deserialize(raw);
    if (!tmp)
        return;
    std::cout << "Str : " << tmp->getStr() << std::endl
        << "Int : " << tmp->getInt() << std::endl
        << "Double : " << tmp->getDouble() << std::endl
        << "Float : " << tmp->getFloat() << std:: endl;
}