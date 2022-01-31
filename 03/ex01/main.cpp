/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:04:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/23 23:03:03 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("HOJO");
    ScavTrap b;
    ClapTrap c("Khancho");

    b = a;

    b.attack("Khancho");
    b.takeDamage(2);
    b.beRepaired(3);
    c.beRepaired(3);
    b.takeDamage(6);
    return (0);
}