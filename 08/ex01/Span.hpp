/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:54:33 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 16:38:07 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {
    private :
        std::vector<int> vec;
    
    public :
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span&src);
        Span& operator=(const Span& src);

        std::vector<int> getVector() const;

        void addNumber(int num);
        void addNumbers(int cnt);
        
        int shortestSpan();
        int longestSpan();

        class StoreException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return ("Can't not store anymore");
                }
        };
        
        class SpanException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return ("Can't find shortest or longest span.");
                }
        };
};



#endif