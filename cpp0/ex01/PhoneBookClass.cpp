/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:35:07 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/27 19:04:40 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBookClass.hpp"
#include "Contact.hpp"

//definition des classes

PhoneBook::PhoneBook(void) //fct construction
{
	std::cout << "Constructor PHONEBOOK called" << std::endl;
	return ;
}

void PhoneBook::addContact(Contact new_contact, int i)
{
	if (i < 2)
		this->contacts[i] = new_contact;
	else
		std::cout << "> repertory is full.. cannot ADD sryy :/" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) //fct destruction
{
	std::cout << "Destructor PHONEBOOK called" << std::endl;
	return ;
}