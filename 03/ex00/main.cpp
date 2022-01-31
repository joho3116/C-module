/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:04:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/16 23:03:34 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("HOJO");
    ClapTrap b("Khancho");

    a.attack("Khancho");
    b.takeDamage(2);
    b.beRepaired(3);
    return (0);
}