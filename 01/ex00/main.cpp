/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:28:19 by johokyoun         #+#    #+#             */
/*   Updated: 2021/12/21 16:55:11 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("nicolas");
    zombie->announce();
    randomChump("hojo");
    delete zombie;
    return (0);
}