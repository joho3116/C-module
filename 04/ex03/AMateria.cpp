/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:46:14 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 13:43:04 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    this->_type = type;
}

AMateria::AMateria(AMateria const &src) {
    *this = src;
}

AMateria::~AMateria() {
}


AMateria& AMateria::operator=(AMateria const &src){
    this->_type = src._type;
    this->_xp = src._xp;
    return (*this);
}

std::string const &AMateria::getType() const {
    return (this->_type);
}

unsigned int AMateria::getXp() const {
    return (this->_xp);
}

void AMateria::use(ICharacter&) {
    _xp += 10;
}