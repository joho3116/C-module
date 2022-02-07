/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:49:15 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 15:36:24 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    
    for (int i = 0; i < 20; i++)
        vec.push_back(i);
    std::cout << "vector is " << std::endl;
    for (int i = 0; i < (int)vec.size(); i++)
        std::cout << vec[i] << ' ';
    std::cout << std::endl;
    
    std::vector<int>::iterator it;
    
    try {
        it = easyfind(vec, 3);
        std::cout << "find : " << *it << std::endl;
        it = easyfind(vec, 5);
        std::cout << "find : " << *it << std::endl;
        it = easyfind(vec, 16);
        std::cout << "find : " << *it << std::endl;
        it = easyfind(vec, 20);
        std:: cout << "find : " << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}