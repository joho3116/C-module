/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:04:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/31 16:17:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a("Hojo");
	DiamondTrap b;
	DiamondTrap c("Khancho");

	b = a;
	b.attack("Khancho");
	c.takeDamage(10);
	c.beRepaired(20);
	c.guardGate();
	b.highFivesGuys();
	b.whoAmI();
}