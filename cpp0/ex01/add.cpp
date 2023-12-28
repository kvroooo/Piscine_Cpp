/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:05:28 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/28 17:11:40 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBookClass.hpp"

string	get_line(string object)
{
	string info;
	while (info.length() == 0)
	{
		std::cout << BGRN << "> " << object << " : " << RST << std::endl;
		std::cin >> info;
		if (info.length() == 0)
			std::cout << BGRN << "> please try again :C" << RST << std::endl;
	}
	return info;
}

void	createContact(PhoneBook *phone, int i)
{
	Contact		new_contact;

	new_contact.setContact(get_line("first name"), get_line("last name"),
	get_line("surname"), get_line("phone number"), get_line("darkest secrest"));
	phone->addContact(new_contact, i);
}
