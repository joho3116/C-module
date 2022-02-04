/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:19:28 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 17:32:09 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain const &src);
    Brain &operator= (Brain const &src);
    ~Brain();
    std::string const &getIdea(int i) const;
};

#endif