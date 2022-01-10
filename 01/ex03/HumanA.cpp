/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:43:38 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/07 20:21:43 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* 멤버 이니셜라이저
생성자의 역할인 멤버 변수의 초기화를 대신할 수 있음

꼭 사용해야하는 경우

1. 상수멤버의 초기화
2. 레퍼런스 멤버 초기화
3. 객체멤버 초기화
4. 부모클래스의 멤버변수 초기화

객체 생성 이전에 초기화가 이뤄짐, 상수멤버나 레퍼런스 멤버의 경우, 객체 선언과 동시에 초기화되어야하기 때문에
이니셜라이저를 사용해야함.
*/

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
    this->_name = name;
}

void    HumanA::attack()
{
        std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{  
}