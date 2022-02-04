/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:22:09 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 12:45:29 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inven[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        if (this->_inven[i] != NULL)
            delete this->_inven[i];
}

Character::Character(const Character& src)
{
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
    {
        if (src._inven[i] != NULL)
            this->_inven[i] = src._inven[i]->clone();
        else
            this->_inven[i] = NULL;
    }
}

Character& Character::operator=(const Character& src)
{
    if (this != &src)
    {
        this->~Character();
        this->_name = src._name;
        for (int i = 0; i < 4; i++)
        {
            if (src._inven[i] != NULL)
                this->_inven[i] = src._inven[i]->clone();
            else
                this->_inven[i] = NULL;
        }
    }
    return (*this);
}

std::string const &Character::getName() const 
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inven[i] == NULL)
        {
            this->_inven[i] = m;
            return ;
        }
    }
}

void Character::unequip(int i)
{
    if (i >= 0 && i < 4)
        this->_inven[i] = NULL;
}

void Character::use(int i, ICharacter& target)
{
    if (i >= 0 && i < 4 && this->_inven[i] != NULL)
        this->_inven[i]->use(target);
}