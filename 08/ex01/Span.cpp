/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:03:22 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 16:40:34 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
}

Span::Span(unsigned int n) {
    vec.reserve(n);
}

Span::Span(const Span& src) {
    vec = src.vec;
}

Span::~Span() {
}

Span& Span::operator=(const Span& src) {
    if (this != &src)
        vec = src.vec;
    return (*this);
}

void Span::addNumber(int num) {
    if (vec.size() == vec.capacity())
        throw StoreException();
    vec.push_back(num);
}

void Span::addNumbers(int cnt) {
    if (vec.size() == vec.capacity())
        throw StoreException();
    for (int i = 0; i < cnt; i++)
        addNumber(i);
}

int Span::shortestSpan() {
    if (vec.size() < 2)
        throw SpanException();
    std::vector<int> cp = vec;
    
    sort(cp.begin(), cp.end());
    std::vector<int>::iterator prev = cp.begin();
    std::vector<int>::iterator next = ++cp.begin();
    int shortSpan = *next - *prev;
    for ( ; prev != (cp.end() - 1); prev++)
    {
        for ( ; next != cp.end(); next++)
        if ((*next - *prev) < shortSpan)
            shortSpan = (*next - *prev);
    }
    return (shortSpan);
}

int Span::longestSpan() {
    if (vec.size() < 2)
        throw SpanException();
    std::vector<int> cp = vec;
    sort(cp.begin(), cp.end());
    return (cp.back() - cp.front());
}

std::vector<int> Span::getVector() const {
    return (this->vec);
}