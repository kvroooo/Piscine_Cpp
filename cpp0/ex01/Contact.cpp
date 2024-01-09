/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:26:45 by smlamali          #+#    #+#             */
/*   Updated: 2024/01/09 14:19:54 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBookClass.hpp"

// --------- CONSTRUCTEUR ---------
Contact::Contact(void)
{
	std::cout << CYN << "Constructor CONTACT called" << RST << std::endl;
	return ;
}

// ---------SET CONTATCS ---------
void	Contact::setContact(std::string fname, std::string lname, std::string surname, std::string number, std::string secret)
{
	this->f_name = fname;
	this->l_name = lname;
	this->surname = surname;
	this->number = number;
	this->secret = secret;
	return ;
}

// --------- DESTRUCTEUR ---------
Contact::~Contact(void)
{
	std::cout << CYN << "Destructor CONTACT called" << RST << std::endl;
	return ;
}
