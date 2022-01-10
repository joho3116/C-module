/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:44:07 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/07 20:20:43 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
    
    std::string _name;
    Weapon* _weapon;

    public :
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon& weapon);
};

#endif