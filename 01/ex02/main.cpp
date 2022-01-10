/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:24:28 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/03 15:28:07 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string*    strPtr = &str;
    std::string&    strRef = str;

    std::cout << "Adress in memory of string is " << &str << std::endl;
    std::cout << "Adress in memory of string by using PTR is " << strPtr << std::endl;
    std::cout << "Adress in memory of string by using REF is " << &strRef << std::endl;
    std::cout << std::endl;
    std::cout << "Display string by using PTR is " << *strPtr << std::endl;
    std::cout << "Display string by using REF is " << strRef << std::endl;
    return (0);
}