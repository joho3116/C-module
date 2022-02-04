/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:17:16 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/04 12:44:12 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
    private :
        std::string _name;
        AMateria* _inven[4];
        Character();
    
    public :
        Character(std::string const &name);
        virtual ~Character();
        Character(const Character& src);
        Character& operator=(const Character& src);
        
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int i);
        virtual void use(int i, ICharacter& target);   
};
#endif