/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:58:07 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 22:36:16 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
    private :
    T *arr;
    unsigned int _size;
    
    public :
        Array() {
            this->arr = new T[0];
            this->_size = 0;
        }
        
        Array(unsigned int n) {
            this->arr = new T[n];
            this->_size = n;
        }
        
        Array(const Array& src) {
            this->_size = src.size();
            this->arr = new T[this->_size];
            const T* tmpArr = src.getArr();
            for (unsigned int i = 0; i < this->_size; i++)
                arr[i] = tmpArr[i];
        }
        
        Array& operator=(const Array& src) {
            if (this != &src)
            {
                this->_size = src.size();
                delete[] this->arr;
                this->arr = new T[this->_size];
                const T* tmpArr = src.getArr();
                for (int i = 0; i < this->_size; i++)
                    arr[i] = tmpArr[i];
            }
            return (*this);
        }
        
        unsigned int size() const {
            return (this->_size);
        }

        T* getArr() const {
            return (this->arr);
        }

        T& operator[](unsigned int i)
        {
            if (i >= this->_size)
                throw RangeException();
            return (this->arr[i]);
        }

        class RangeException : public std::exception {
            public :
            const char* what() const throw() {
                return ("Out of range.");
            }
        };    
};

#endif