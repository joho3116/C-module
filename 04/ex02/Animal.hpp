/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:48:55 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:54:40 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& src);
    virtual ~Animal();
    Animal& operator=(const Animal& src);

    std::string const & getType() const;
    virtual void makeSound() const = 0;
    // 클래스 내에서 virtual로 명시된 함수들 중, 0을 할당한 함수는 Pure Virtual Function을 의미
    // 해당함수를 정의하지 않겠다는 것을 의미하고, 정의되지않은 함수가 포함된 객체는
    // 다형성을 위한 파생클래스에서의 생성을 제외하고는 직접 생성이 불가능하고
    // 해당함수를 파생 클래스에서 오버라이딩하지 않으면, 여전히 정의되지않은 함수가되어
    // 파생클래스 역시 객체로 만들 수 없기 때문에 파생클래스에서는 다시 정의해야함

    // 파생클래스에게 청사진을 제공하고, 그 자체로서는 객체의 기능을 하지 못하기 때문에 일종의 Interface로 동작
    // 이것을 추상클래스라고 부른다. 추상클래스는 파생클래스를 생성할 때 객체가 될 수 있으므로, orthdox Canonical form을 작성하는 것이 유의미하다
};

#endif