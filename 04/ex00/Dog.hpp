/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:50:54 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 14:01:03 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

public:
    Dog();
    virtual ~Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);

    virtual void makeSound() const;
};

#endif