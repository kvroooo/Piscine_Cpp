/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:26:45 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/27 19:04:36 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

// --------- CONSTRUCTEUR ---------

Contact::Contact(void)
{
	std::cout << "Constructor CONTACT called" << std::endl;
	return ;
}

// ---------SET CONTATCS ---------
void	Contact::setContact(string fname, string lname, string secret, string surname, string number)
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
	std::cout << "Destructor CONTACT called" << std::endl;
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
