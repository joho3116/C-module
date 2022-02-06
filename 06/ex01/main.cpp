/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:20:50 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 01:28:58 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main()
{
    Data alpha;
    Data beta("hojo", 30, 5.30, 42.42);
    uintptr_t ptr1 = serialize(&alpha);
    uintptr_t ptr2 = serialize(&beta);

    std::cout << "alpha`s address is " << &alpha << std::endl;
    std::cout << "alpha is " << alpha << std::endl;
    std::cout << "serialized alpha is " << std::endl;
    std::cout << ptr1 << std::endl;
    std::cout << "deserialized alpha is " << std::endl;
    printRaw(ptr1);
    std::cout << std::endl << "=====================" << std::endl;
    std::cout << "beta`s address is " << &beta << std::endl;
    std::cout << "beta is " << beta << std::endl;
    std::cout << "serialized beta is " << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << "deserialized beta is " << std::endl;
    printRaw(ptr2);
    return (0);
}