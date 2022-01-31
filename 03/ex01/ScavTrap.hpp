/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:31:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/21 17:58:24 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap& src);
        ScavTrap& operator=(const ScavTrap& src);
        ScavTrap(std::string name);

        virtual void    attack(std::string const & target);
        virtual void    takeDamage(unsigned int amount);
        virtual void    beRepaired(unsigned int amount);

        void    guardGate();
};

#endif