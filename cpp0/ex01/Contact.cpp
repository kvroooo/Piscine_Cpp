/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:26:45 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/29 18:44:17 by smlamali         ###   ########.fr       */
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
	this->secret = secret;
	this->surname = surname;
	this->number = number;
	return ;
}

// --------- DESTRUCTEUR ---------
Contact::~Contact(void)
{
	std::cout << CYN << "Destructor CONTACT called" << RST << std::endl;
	return ;
}

// // ---------   SETTERS   ---------
// void	Contact::setFirstName(string str)
// {
// 	this->f_name = str;
// 	return ;
// }

// void	Contact::setLastName(string str)
// {
// 	this->l_name = str;
// 	return ;
// }

// void	Contact::setSurname(string str)
// {
// 	this->surname = str;
// 	return ;
// }

// void	Contact::setNumber(string str)
// {
// 	this->number = str;
// 	return ;
// }

// // ---------GET CONTATCS ---------
// void	Contact::getContact( void ) const
// {
// 	return ;
// }

// // 		---------   GETTERS   ---------
// string	Contact::getFirstName( void ) const
// {
// 	return this->f_name;
// }

// string	Contact::getLastName( void ) const
// {
// 	return this->l_name;
// }

// string	Contact::getSurname( void ) const
// {
// 	return this->surname;
// }

// string	Contact::getNumber( void ) const
// {
// 	return this->number;
// }

// string	Contact::getSecret( void ) const
// {
// 	return this->secret;
// }
