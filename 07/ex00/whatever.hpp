/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:09:21 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 23:31:53 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
    T tmp;
    tmp = a;
    if (tmp < b)
        return (a);
    else
        return (b);
}

template <typename T>
T max(T& a, T& b)
{
    T tmp;
    tmp = a;
    if (tmp > b)
        return (a);
    else
        return (b);
}

#endif