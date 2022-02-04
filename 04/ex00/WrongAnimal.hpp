/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:58:36 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:24:20 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
    
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& src);
        virtual ~WrongAnimal();
        std::string const & getType() const;

        virtual void makeSound() const;
};

#endif