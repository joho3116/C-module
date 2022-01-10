/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:01:19 by johokyoun         #+#    #+#             */
/*   Updated: 2021/12/22 22:07:34 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde;

    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}