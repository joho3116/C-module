/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:32:57 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/10 13:34:18 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen karen;

    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    karen.complain("BLABLA");
}