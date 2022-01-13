/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:21:46 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/11 22:54:54 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private :
        int _value;
        static const int _fractionalBits; // 가수부
    public :
        Fixed();
        ~Fixed();
        Fixed(Fixed& src);
        Fixed& operator=(Fixed& src);
        int getRawBits(void) const;
        void    setRawBits(int const num);
};

#endif