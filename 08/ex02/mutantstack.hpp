/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:54:15 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 17:34:12 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack() : std::stack<T>() {    
        }
        ~MutantStack() {
        }
        MutantStack(const MutantStack& src) : std::stack<T>(src){   
        }
        MutantStack<T>& operator=(const MutantStack<T>& src) {
            if (this != &src)
                std::stack<T>::operator=(src);
            return (*this);
        }
        typedef typename std::stack<T>::container_type::iterator iterator;        
        iterator begin() {
            return (this->c.begin());
        }
        iterator end() {
            return (this->c.end());
        }
};

#endif