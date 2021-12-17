/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojo <hojo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:12:16 by hojo              #+#    #+#             */
/*   Updated: 2021/12/17 19:48:38 by hojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	_number_of_contacts = 0;
	_for_replace_idx = 0;
}

int	Phonebook::add_contact()
{
	if (_number_of_contacts < 8)
	{
		if (_contacts[_number_of_contacts].input_infomation(_number_of_contacts + 1) < 0)
			return (-1);
		_number_of_contacts++;
		_for_replace_idx++;
	}
	else
	{
		if (_contacts[_for_replace_idx % 8].replace_infomation(_for_replace_idx % 8 + 1) < 0)
			return (-1);
		_for_replace_idx++;
	}
	return (0);
}

int	Phonebook::select_contact()
{
	bool	flag_isdigit;
	char	idx[2];
	size_t	i;

	i = 0;
	flag_isdigit = true;
	std::cout << "Please select an idx : ";
	std::cin >> idx;
	if (std::cin.eof())
		return (-1);
	while (i < strlen(idx))
	{
		if(isdigit(idx[i]) == 0)
			flag_isdigit = false;
		i++;
	}
	if (!flag_isdigit || std::cin.fail() || atoi(idx) > _number_of_contacts || atoi(idx) <= 0)
	{
		std::cout << "Error : Invalid value." << std::endl;
		std::cout << "==================================================" << std::endl;
		return (1);
	}
	_contacts[atoi(idx) - 1].view_contact_detail(atoi(idx));
	return (0);
}

int	Phonebook::view_phonebook()
{
	int	i;

	i = 0;
	if (_number_of_contacts == 0)
		std::cout << "Error : Phonebook is empty." << std::endl;
	else
	{
		std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
		std::cout << "│     INDEX│FIRST NAME│ LAST NAME│  NICKNAME│" << std::endl;
		std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		while (i < _number_of_contacts)
		{
			_contacts[i].view_contact_list();
			i++;
		}
		std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
		if (select_contact() < 0)
			return (-1);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (0);
}

Phonebook::~Phonebook() {
}

Contact::Contact()
{
	int	i;

	i = 0;
	while (i < 8)
	{
		_contact_info[i] = std::string();
		_contact_fields[0] = "First name";
		_contact_fields[1] = "Last name";
		_contact_fields[2] = "Nickname";
		_contact_fields[3] = "Phone number";
		_contact_fields[4] = "Email address";
		_contact_fields[5] = "Darkest secret";
		i++;
	}
}

int	Contact::input_infomation(int idx)
{
	int	i;
	_idx = idx;

	i = 0;
	std::cout << "==================================================" << std::endl;
	std::cout << "           Please enter a infomation.       " << std::endl;
	while (i < 6)
	{
		while (_contact_info[i].length() == 0)
		{
			std::cout << _contact_fields[i] << " : ";
			std::getline(std::cin, _contact_info[i]);
			if (std::cin.eof())
				return (-1);
			if (_contact_info[i].length() == 0)
				std::cout << "Error : Invalid value." << std::endl;
		}
		i++;
	}
	std::cout << "            Register Success.      " << std::endl;
	std::cout << "==================================================" << std::endl;
	return (0);
}

int	Contact::replace_infomation(int idx)
{
	int	i;
	std::string	tmp[6];
	_idx = idx;

	i = 0;
	std::cout << "Phonebook is full now. entered infomation will be replaced." << std::endl;
	std::cout << "==================================================" << std::endl;
	std::cout << "           Please enter a infomation.       " << std::endl;
	while (i < 6)
	{
		while (tmp[i].length() == 0)
		{
			std::cout << _contact_fields[i] << " : ";
			std::getline(std::cin, tmp[i]);
			if (std::cin.eof())
				return (-1);
			_contact_info[i] = tmp[i];
			if (_contact_info[i].length() == 0)
				std::cout << "Error : Invalid value." << std::endl;
		}
		tmp[i].clear();
		i++;
	}
	std::cout << "            Register Success.      " << std::endl;
	std::cout << "==================================================" << std::endl;
	return (0);
}

void	Contact::view_contact_list()
{
	int	i;

	i = 0;
	std::cout << "|" << std::setw(10) << _idx;
	while (i < 3)
	{
		if (_contact_info[i].length() < 10)
			std::cout << "|" << std::setw(10) << _contact_info[i];
		else
			std::cout << "|" << _contact_info[i].substr(0,9) << ".";
		i++;
	}
	std::cout << "|" << std::endl;
}

void	Contact::view_contact_detail(int idx)
{
	int	i;

	i = 0;
	std::cout << "==================================================" << std::endl;
	std::cout << "This is the contact infomation for idx [" << idx << "]" << std::endl;
	while (i < 6)
	{
		std::cout << _contact_fields[i] << " : " << _contact_info[i] << std::endl;
		i++;
	}
	std::cout << "==================================================" << std::endl;
}

Contact::~Contact() {
}
