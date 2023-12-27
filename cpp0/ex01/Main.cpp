/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:29 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/27 19:05:51 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBookClass.hpp"


string	get_line(string object)
{
	string str;

	std::cout << "> " << object << " : " << std::endl;
	std::cin >> str;
	while (str.length() == 0)
	{
		std::cout << "> try again with more information  !" << std::endl;
		std::cin >> str;
	}
	return str;
}

void	createContact(Contact new_contact, PhoneBook phone, int i)
{
	new_contact.setContact(get_line("first name"), get_line("last name"),
	get_line("surname"), get_line("phone number"), get_line("darkest secrest"));
	// new_contact.setFirstName(get_line("First Name"));
	phone.addContact(new_contact, i);
}

int	main(void)
{
	int			i = 0;
	string		str = "";
	Contact		new_contact;
	PhoneBook	phone;

	while (str.compare("EXIT") != 0)
	{
		std::cout << "> ADD SEARCH or EXIT ? " << std::endl;
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			std::cout << "> /!\\ you selected ADD /!\\" << std::endl;
			createContact(new_contact, phone , i);
			i++;
		}
		else if (str.compare("SEARCH") == 0)
			std::cout << ">/!\\ you selected SEARCH /!\\ " << std::endl;
		else if (str.compare("EXIT") == 0)
			std::cout << ">you selected EXIT.. BYE !!! o/ " << std::endl;
		else
			std::cout << "> please try again" << std::endl;
	}
	return 0;
}