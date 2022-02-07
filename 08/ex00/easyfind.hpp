/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:49:32 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 15:37:23 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class FindException : public std::exception {
    public :
        virtual const char* what() const throw() {
            return ("Fail to find.");
        }
};

template<typename T>
typename T::iterator easyfind(T container, int value) {
    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw FindException();
    return (it);
}

#endif