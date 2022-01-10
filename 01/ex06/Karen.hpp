/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:42:11 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/10 20:22:50 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3


class Karen
{
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    
    public :
        Karen();
        ~Karen();
        void    complain(std::string level);
};


#endif