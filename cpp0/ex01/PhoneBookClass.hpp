/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:31:21 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/27 19:04:39 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

#include "Contact.hpp"

// declaration de classe PhoneBook
class	PhoneBook
{
public:
	Contact	contacts[8]; //attribut membre

	PhoneBook(void); //constructeur
	~PhoneBook(void); //desctructeur (~)

	void	addContact(Contact new_contact, int i); //fonction membre
};

# endif