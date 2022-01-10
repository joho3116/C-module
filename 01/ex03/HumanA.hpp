/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:43:58 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/03 16:29:14 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
    
    std::string _name;
    Weapon& _weapon;

    public :
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void    attack();
};

#endif