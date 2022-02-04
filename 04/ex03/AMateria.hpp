/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:05:41 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 14:01:02 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

    private :
    AMateria() {};
    
    protected :
        std::string _type;
        unsigned int _xp;
        
    public :
        AMateria(std::string const & type);
        AMateria(AMateria const &src);
        virtual ~AMateria();
        AMateria &operator=(AMateria const &src);
        
        std::string const & getType() const;
        unsigned int getXp() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif