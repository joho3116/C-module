/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:06:29 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/03 16:19:45 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class   Weapon {
    std::string _type;

    public :
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType();
        void setType(std::string);
};

#endif