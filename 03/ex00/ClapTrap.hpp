/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:07:00 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/16 22:44:43 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    private :
        std::string _name;
        unsigned int    _Hitpoints;
        unsigned int    _Energy_points;
        unsigned int    _Attack_damage;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap &src);
        ClapTrap& operator=(const ClapTrap& src);
        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif