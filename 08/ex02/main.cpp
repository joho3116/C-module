/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:53:25 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 17:49:54 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "list"

int main()
{
    std::cout << "=======Basic case =======" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top element is : ";
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "top element after pop is : ";
    std::cout << mstack.top() << std::endl;
    std::cout << "stack size is : ";
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "stack size after push at 3, 5, 737, 0 is : ";
    std::cout << mstack.size() << std::endl;
    std::cout << "=======iterator case =======" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "STACK ELEMENT IS " << std::endl << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    it = mstack.begin();
    std::cout << std::endl;
    std::cout << "it is : " << *it << std::endl;
    std::cout << "ite is : " << *ite << std::endl; 
    std::cout << "it value before prefix increment operator : ";
    std::cout << *it << std::endl;
    ++it;
    std::cout << "it value after prefix increment operator : ";
    std::cout << *it << std::endl;
    --it;
    std::cout << "it value after prefix decrement operator : ";
    std::cout << *it << std::endl;

    std::stack<int> s(mstack);
    std::cout << "================ list test ================" << std::endl;

		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "top : " << list.back() << std::endl;

		list.pop_back();
		std::cout << "top : " << list.back() << std::endl;
		std::cout << "size : " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator l_it = list.begin();

		for( ; l_it != list.end(); l_it++) {
			std::cout << "value : " << *l_it << std::endl;
		}
    return (0);
}