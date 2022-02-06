/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:29:52 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 18:53:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void printT(T &a)
{
    std::cout << a << std::endl;
    return;
}

template <typename T>
void iter(T *arrPtr, int len, void (*func)(T &a))
{
    if (arrPtr == NULL || len == 0 || func == NULL)
        return ;
    for (int i = 0; i < len; i++)
        func(arrPtr[i]);
}

#endif