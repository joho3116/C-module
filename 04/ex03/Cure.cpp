/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:57:06 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 14:08:03 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(const Cure& src) : AMateria(src) {
}

Cure& Cure::operator=(const Cure &src) {
    if (this != &src)
    {
        AMateria::operator=(src);
    }
    return (*this);
}

AMateria* Cure::clone() const {
    return (new Cure());
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
    AMateria::use(target);
}