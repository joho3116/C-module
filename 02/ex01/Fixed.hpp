/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:21:46 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/12 17:02:54 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int _value;
        static const int _fractionalBits = 8; // 가수부
    public :
        Fixed();
        Fixed(const int c);
        Fixed(const float f);
        Fixed(const Fixed& src);
        ~Fixed();
        Fixed& operator=(const Fixed& src);
        int getRawBits(void) const;
        void    setRawBits(int const num);
        float   toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif