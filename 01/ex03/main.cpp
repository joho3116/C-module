/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:43:09 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/09 21:00:55 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

/* HumanA 객체는 생성 시에 Weapon을 갖고있는 채로 생성되고 (객체를 생성할 때부터 갖고 있어야 하기 때문에), 
HumanB는 Weapon을 소지할 수는 있으나, 생성 시에는 갖고있지 않는다.

따라서 HumanB 클래스의 Weapon은 포인터로, HumanA 클래스는 참조자로 설정한다.
*/

int main()
{
    {
        Weapon  club = Weapon("Crude Spiked club.");
        
        HumanA  bob("Bob", club);
        bob.attack();
        club.setType("Other type of club.");
        bob.attack();
    }
    {
        Weapon  club = Weapon("Crude Spiked club.");
        
        HumanB  jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Other type of club.");
        jim.attack();
    }
}