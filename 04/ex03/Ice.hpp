/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:00:52 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 14:03:41 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
    
    public :
    Ice() : AMateria("ice") {}
    virtual ~Ice() {}
    Ice(const Ice& src);
    Ice& operator=(const Ice&);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    
};

#endif