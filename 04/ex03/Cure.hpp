/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:54:06 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 14:03:36 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
    
    public :
    Cure() : AMateria("cure") {}
    virtual ~Cure() {}
    Cure(const Cure& src);
    Cure& operator=(const Cure&);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    
};

#endif