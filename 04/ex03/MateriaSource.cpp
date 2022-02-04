/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:58:27 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 14:07:52 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != NULL)
            delete materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
    for (int i = 0; i < 4; i++)
        materia[i] = src.materia[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
    if (this != &src)
    {
        this->~MateriaSource();
        for (int i = 0; i < 4; i++)
            materia[i] = src.materia[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] == NULL)
        {
            materia[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    if (type != "ice" && type != "cure")
        return (NULL);
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            return (materia[i]->clone());
    }
    return (NULL);
}