/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:23:23 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 17:14:45 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

class Data {
 private:
  std::string _str;
  int _i;
  double _d;
  float _f;

 public:
    Data();
    Data(const std::string& str, int i, double d, float f);
    Data(const Data& src);
    Data& operator=(const Data& src);
    ~Data();
  
    const std::string& getStr() const;
    const int& getInt() const;
    const double& getDouble() const;
    const float& getFloat() const;
};

uintptr_t serialize(Data* ptr);
/* 포인터의 주소를 저장하는 데에 사용, inptr_t 타입의 부호없는 버전이 uintptr_t*/
Data* deserialize(uintptr_t raw);
std::ostream& operator<<(std::ostream& out, const Data& ptr);
void printRaw(uintptr_t raw);

#endif