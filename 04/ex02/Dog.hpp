/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:50:54 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 22:46:41 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
{

private:
    Brain *brain;

public:
    Dog();
    ~Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);

    void makeSound() const;
    Brain *getBrain() const;
};

#endif