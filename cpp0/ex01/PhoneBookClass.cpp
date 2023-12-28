/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:35:07 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/28 16:52:04 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
	if (i < 2)
	{
		this->contacts[i] = new_contact;
		this->n_contact += 1;
	}
	else
		this->contacts[0] = new_contact;
	return ;
}

PhoneBook::~PhoneBook(void) //fct destruction
{
	std::cout << CYN << "Destructor PHONEBOOK called" << RST << std::endl;
	return ;
}