/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:00:36 by johokyoun         #+#    #+#             */
/*   Updated: 2021/12/22 22:14:50 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombiehorde;
    int cnt;

    cnt = 6;
    zombiehorde = zombieHorde(cnt, "hojo");
    for (int i = 0; i < cnt; i++)
        zombiehorde[i].announce();
    delete [] zombiehorde;
    return (0);
}