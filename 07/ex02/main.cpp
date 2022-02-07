/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:07:37 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 13:29:32 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

template<typename T>
void printArr(Array<T>& arr) {
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}


int main(int, char**)
{
    Array<int> number;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    std::cout << "number`s address is " << &number << std::endl;
    printArr(numbers);
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "=================== Index -2 case =======================" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    printArr(numbers);
    std::cout << "=================== Insert i to numbers[i] =======================" << std::endl;
    try
    {
        for (int i = 0; i < MAX_VAL; i++)
            numbers[i] = i;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    printArr(numbers);
    std::cout << "=================== last value change =======================" << std::endl;
    try
    {
        numbers[MAX_VAL - 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    printArr(numbers);
    std::cout << "=================== MAX_VAL INDEX =======================" << std::endl;
    try
    {
        numbers[MAX_VAL] = 1232141523;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}