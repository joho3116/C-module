/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:04:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/23 23:09:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("hojo");
    FragTrap b;
    FragTrap c("Khancho");
    

    b = a;

    b.attack("Khancho");
    b.takeDamage(2);
    b.beRepaired(3);
    a.highFivesGuys();
    b.highFivesGuys();
    c.highFivesGuys();
    
    return (0);
}