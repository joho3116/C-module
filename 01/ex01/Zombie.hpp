/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:00:57 by johokyoun         #+#    #+#             */
/*   Updated: 2021/12/22 22:06:41 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include<string>

class Zombie
{
    std::string _name;

    public:
            Zombie();
            Zombie(std::string name);
            void    setName(std::string name);
            void    announce();
            ~Zombie();
};

Zombie* zombieHorde( int N, std::string name);

#endif