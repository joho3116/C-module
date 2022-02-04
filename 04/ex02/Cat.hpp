/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:47:01 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 22:47:15 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    ~Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);

    void makeSound() const;
    Brain *getBrain() const;
};

#endif