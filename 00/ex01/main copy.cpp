/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojo <hojo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:19:24 by hojo              #+#    #+#             */
/*   Updated: 2021/12/17 16:52:00 by hojo             ###   ########.fr       */
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
		// string lib의 getline(입력스트림 오브젝트, 문자열을 저장할 string 객체, 종결문자(없으면 \n))
		// istream lib의 cin.getline(변수 주소, 최대입력가능 문자수, 종결문자(없으면 \n))
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
