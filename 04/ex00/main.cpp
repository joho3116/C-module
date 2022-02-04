/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:49:02 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:23:33 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();
    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    l->makeSound();
    k->makeSound();

    delete meta;
    delete i;
    delete j;
    delete k;
}