/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojo <hojo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:19:24 by hojo              #+#    #+#             */
/*   Updated: 2021/12/15 16:41:34 by hojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main(void)
{
	bool			working;
	Phonebook		phonebook;
	std::string		command;

	working = true;
	while (working)
	{
		std::cout << "Please enter a command. (ADD, SEARCH OR EXIT) : ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			return (-1);
		if (!command.compare("ADD") && (phonebook.add_contact()) < 0)
			break ;
		else if (!command.compare("SEARCH") && (phonebook.view_phonebook() < 0))
			break ;
		else if (!command.compare("EXIT"))
			working = false;
	}
	return (0);
}
