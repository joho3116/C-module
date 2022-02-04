/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:49:27 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 17:55:37 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		srand(time(NULL));
		Animal *Animals[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		std::cout << "\n-----------------------------" << std::endl;
		Animal *copy = new Dog(*(Dog *)Animals[4]);
		for (int i = 0; i < 100; ++i)
		{
			std::cout << ((Dog *)copy)->getBrain()->getIdea(i) << "    ";
			std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << "-----------------------------\n" << std::endl;
		delete copy;
		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
	}
	system("leaks Animal");
}