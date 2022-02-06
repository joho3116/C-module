/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:29:01 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 17:49:19 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void A::sound() {
    std::cout << "A SOUND " << std::endl;
}

void B::sound() {
    std::cout << "B SOUND " << std::endl;
}

void C::sound() {
    std::cout << "C SOUND " << std::endl;
}

Base* generate() {
    int randomNUM;

    srand(time(NULL));
    randomNUM = rand() % 3;
    if (randomNUM == 0)
    {
        std::cout << "A is constructed." << std::endl;
        return (new A());
    }
    else if (randomNUM == 1)
    {
        std::cout << "B is constructed." << std::endl;
        return (new B());
    }
    else if (randomNUM == 2)
    {
        std::cout << "C is constructed." << std::endl;
        return (new C());
    }
    else
    {
        std::cerr << "Error." << std::endl;
        return (NULL);
    }
}

void identify(Base* p) 
{
    A* ptrA;
    B* ptrB;
    C* ptrC;

    if ((ptrA = dynamic_cast<A*>(p)))
        ptrA->sound();
    else if ((ptrB = dynamic_cast<B*>(p)))
        ptrB->sound();
    else if ((ptrC = dynamic_cast<C*>(p)))
        ptrC->sound();
}

void identify(Base& r)
{
    try
    {
        A refA = dynamic_cast<A&>(r);
        refA.sound();
    }
    catch(const std::exception& e) {}
    try
    {
        B refB = dynamic_cast<B&>(r);
        refB.sound();
    }
    catch(const std::exception& e) {}
    try
    {
        C refC = dynamic_cast<C&>(r);
        refC.sound();
    }
    catch(const std::exception& e) {}

    
            
}

/* dynamic cast 
상속관계에서 형변환을 보다 안전하게 처리할 수 있음
"자식 클래스의 참조/포인터 형식에서 부모클래스의 참조/포인터 형식으로 형변환을 허용"

하나 이상의 가상함수를 가진 다형성 클래스에 한해서는 부모클래스의 참조/포인터 형식에서 자식 클래스의 참조/포인터로 
형변환을 허용한다.

static_cast의 경우, 파생클래스가 부모클래스를 가리키는 상황에서 자식클래스에만 있는 함수나 데이터를 참조할 시 위험

*/