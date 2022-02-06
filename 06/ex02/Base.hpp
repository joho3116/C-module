/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:25:13 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 15:38:34 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {

    public :
        virtual ~Base() {}
};

class A : public Base {
    public :
    virtual ~A() {}
    void sound();
};

class B : public Base {
    public :
    virtual ~B() {}
    void sound();
};

class C : public Base {
    public :
    virtual ~C() {}
    void sound();
};

Base* generate();
void identify(Base* p);
void identify(Base& r);

#endif