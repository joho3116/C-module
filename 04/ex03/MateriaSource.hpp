/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:48:30 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 13:00:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materia[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource& src);
        MateriaSource& operator=(const MateriaSource& src);
        
        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const &type);
};

#endif