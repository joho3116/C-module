/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojo <hojo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:17:38 by hojo              #+#    #+#             */
/*   Updated: 2021/12/17 17:37:02 by hojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <string>

class Contact
{
	int	_idx;
	std::string	_contact_info[6];
	std::string	_contact_fields[6];

	public:
			Contact();
			int	input_infomation(int idx);
			int	replace_infomation(int idx);
			void	view_contact_list();
			void	view_contact_detail(int idx);
			~Contact();
};

class Phonebook
{
	Contact	_contacts[8];
	int	_number_of_contacts;
	int	_for_replace_idx;

	public:
			Phonebook();
			int	add_contact();
			int	select_contact();
			int	view_phonebook();
			~Phonebook();
};

#endif
