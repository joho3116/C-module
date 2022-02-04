/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:01:07 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 01:02:13 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(const Ice& src) : AMateria(src) {
}

Ice& Ice::operator=(const Ice &src) {
    if (this != &src)
    {
        AMateria::operator=(src);
    }
    return (*this);
}

AMateria* Ice::clone() const {
    return (new Ice());
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
    AMateria::use(target);
}