/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:35:07 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/29 18:47:34 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "PhoneBookClass.hpp"
#include "Contact.hpp"

//definition des classes

PhoneBook::PhoneBook(void) //fct construction
{
	std::cout << CYN << "Constructor PHONEBOOK called" << RST << std::endl;
	return ;
}

void PhoneBook::addContact(Contact new_contact, int i)
{
	if (i < 8)
	{
		this->contacts[i] = new_contact;
		if (n_contact < 8)
			this->n_contact += 1;
	}
	else
	{
		this->contacts[this->oldest_c] = new_contact;
		this->oldest_c += 1;
		if (this->oldest_c >= 2)
			this->oldest_c = 0;
	}
	return ;
}

std::string	PhoneBook::truncks(std::string str)
{
	unsigned sz = str.size() + (10 - str.size());

	if (str.length() > 10)
	{
		str.resize(9);
		str.push_back('.');
		return str;
	}
	else
		str.resize(sz, ' ');
	return str;
}

std::string	PhoneBook::get_line(std::string object)
{
	std::string info;
	while (info.length() == 0)
	{
		std::cout << BGRN << "> " << object << " : " << RST << std::endl;
		std::getline(std::cin, info);
		if (info.length() == 0)
			std::cout << BGRN << "> please try again :C" << RST << std::endl;
	}
	return info;
}

void	PhoneBook::createContact(int i)
{
	Contact		new_contact;

	new_contact.setContact(get_line("first name"), get_line("last name"),
	get_line("surname"), get_line("phone number"), get_line("darkest secrest"));
	this->addContact(new_contact, i);
}

std::string	PhoneBook::itostr(int nbr)
{
	std::string				str;
	std::stringstream	translate;
	translate << nbr;
	translate >> str;
	return str;
}

int	PhoneBook::strtoi(std::string str)
{
	int					nbr;
	std::stringstream	strm;

	strm << str;
	strm >> nbr;
	std::cout << "nbr=" << nbr << std::endl;
	return nbr;
}

void	PhoneBook::searchContact(void)
{
	int 	i = 0;
	int		j = 0;
	std::string	str;

	while (i < this->n_contact)
	{
		std::cout << truncks(itostr(i)) << "|" << truncks(this->contacts[i].f_name) << "|"
		<< truncks(this->contacts[i].l_name) << "|" << truncks(this->contacts[i].surname) << std::endl;
		i++;
	}
	std::cout << BGRN << " > select index of the contact you want to see : " << RST << std::endl;
	std::getline(std::cin, str);
	j = strtoi(str);
	if (j > n_contact - 1)
		std::cout << "> this index does not exist :c" << std::endl;
	else
	{
		std::cout << GRN << "> first name : " << this->contacts[j].f_name << RST << std::endl;
		std::cout << GRN << "> last name : " << this->contacts[j].l_name << RST<< std::endl;
		std::cout << GRN << "> surname : " << this->contacts[j].surname << RST << std::endl;
		std::cout << GRN << "> phone number : " << this->contacts[j].number << RST << std::endl;
		std::cout << GRN << "> darkest secret : " << this->contacts[j].secret<< RST << std::endl;
	}
	return ;
}

PhoneBook::~PhoneBook(void) //fct destruction
{
	std::cout << CYN << "Destructor PHONEBOOK called" << RST << std::endl;
	return ;
}
